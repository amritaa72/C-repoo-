
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



#define WINDOW        7      
#define HORIZON       10     
#define N_FEATURES    5      
#define MAX_DAYS      3000   
#define LEARN_RATE    0.01f
#define EPOCHS        4000
#define PI            3.14159265f


typedef struct {
    int   year, month, day;
    float temp;
} Day;


typedef struct {
    float x[N_FEATURES];
    float y;
} Sample;



int   load_csv(const char *path, Day *days, int max_days);
int   day_of_year(int year, int month, int day);
void  make_features(Day *window, int year, int month, int day, float *feat);
int   build_samples(Day *days, int n, Sample *samples);
void  train(Sample *samples, int n, float *weights);
float predict_one(float *weights, float *feat);

int load_csv(const char *path, Day *days, int max_days)
{
    FILE *fp = fopen(path, "r");
    if (!fp) {
        fprintf(stderr, "[data] Cannot open %s\n", path);
        return 0;
    }

    char line[256];
    int  count = 0;

    while (fgets(line, sizeof(line), fp) && count < max_days) {
        int   y, m, d;
        float t;

        if (sscanf(line, "%d-%d-%d,%f", &y, &m, &d, &t) == 4) {
            days[count].year  = y;
            days[count].month = m;
            days[count].day   = d;
            days[count].temp  = t;
            count++;
        }
    }

    fclose(fp);
    printf("[data] Loaded %d days of temperature history\n", count);
    return count;
}


int day_of_year(int year, int month, int day)
{
    static const int days_before[] = {
        0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
    };
    int doy = days_before[month - 1] + day;

    int is_leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    if (month > 2 && is_leap) doy += 1;

    return doy;
}


void make_features(Day *window, int year, int month, int day, float *feat)
{
    float sum = 0.0f;
    for (int i = 0; i < WINDOW; i++)
        sum += window[i].temp;
    float avg   = sum / WINDOW;
    float trend = window[WINDOW - 1].temp - window[0].temp;

    int   doy   = day_of_year(year, month, day);
    float angle = 2.0f * PI * (float)doy / 365.0f;

    feat[0] = avg / 40.0f;
    feat[1] = trend / 10.0f;
    feat[2] = sinf(angle);
    feat[3] = cosf(angle);
    feat[4] = 1.0f;
}


int build_samples(Day *days, int n, Sample *samples)
{
    int count = 0;
    for (int i = WINDOW; i < n; i++) {
        make_features(&days[i - WINDOW], days[i].year, days[i].month,
                      days[i].day, samples[count].x);
        samples[count].y = days[i].temp;
        count++;
    }
    return count;
}


float predict_one(float *weights, float *feat)
{
    float sum = 0.0f;
    for (int j = 0; j < N_FEATURES; j++)
        sum += weights[j] * feat[j];
    return sum;
}

void train(Sample *samples, int n, float *weights)
{
    for (int j = 0; j < N_FEATURES; j++)
        weights[j] = 0.0f;

    for (int epoch = 0; epoch < EPOCHS; epoch++) {
        float grad[N_FEATURES] = { 0 };

        for (int i = 0; i < n; i++) {
            float predicted = predict_one(weights, samples[i].x);
            float error     = predicted - samples[i].y;

            for (int j = 0; j < N_FEATURES; j++)
                grad[j] += error * samples[i].x[j];
        }

        for (int j = 0; j < N_FEATURES; j++)
            weights[j] -= LEARN_RATE * grad[j] / (float)n;

        if ((epoch + 1) % 1000 == 0) {
            float total_err = 0.0f;
            for (int i = 0; i < n; i++) {
                float e = predict_one(weights, samples[i].x) - samples[i].y;
                total_err += (e < 0.0f) ? -e : e;
            }
            printf("  Epoch %5d / %d  |  average error = %.2f C\n",
                   epoch + 1, EPOCHS, total_err / n);
        }
    }
}


static void advance_date(int *year, int *month, int *day)
{
    static const int mdays[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int is_leap  = (*year % 4 == 0 && (*year % 100 != 0 || *year % 400 == 0));
    int max_day  = mdays[*month] + ((*month == 2 && is_leap) ? 1 : 0);

    (*day)++;
    if (*day > max_day) {
        *day = 1;
        (*month)++;
        if (*month > 12) { *month = 1; (*year)++; }
    }
}

static void forecast_and_print(Day *history, int n, float *weights,
                               const char *city_name)
{
    Day window[WINDOW];
    memcpy(window, &history[n - WINDOW], sizeof(Day) * WINDOW);

    int y = history[n - 1].year;
    int m = history[n - 1].month;
    int d = history[n - 1].day;

    printf("\n  10-Day Temperature Forecast for %s\n", city_name);
    printf("  Last real reading: %04d-%02d-%02d\n\n", y, m, d);
    printf("  Day   Date          Predicted Temp\n");
    printf("  --------------------------------------\n");

    for (int h = 0; h < HORIZON; h++) {
        advance_date(&y, &m, &d);

        float feat[N_FEATURES];
        make_features(window, y, m, d, feat);
        float temp = predict_one(weights, feat);

        printf("  %2d    %04d-%02d-%02d     %6.1f C\n", h + 1, y, m, d, temp);

        
        memmove(&window[0], &window[1], sizeof(Day) * (WINDOW - 1));
        window[WINDOW - 1].year  = y;
        window[WINDOW - 1].month = m;
        window[WINDOW - 1].day   = d;
        window[WINDOW - 1].temp  = temp;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    printf("\n  Simple AI Weather Forecaster\n");
    printf("  (linear regression, Gradient Descent)\n\n");

    char path_buf[256], city_buf[256];
    const char *csv_path, *city_name;

    if (argc >= 2) {
        csv_path  = argv[1];
        city_name = (argc >= 3) ? argv[2] : "this location";
    } else {
        printf("Path to weather CSV file: ");
        fflush(stdout);
        if (!fgets(path_buf, sizeof(path_buf), stdin)) return 1;
        path_buf[strcspn(path_buf, "\r\n")] = '\0';
        csv_path = path_buf;

        printf("City name (for the printout): ");
        fflush(stdout);
        if (!fgets(city_buf, sizeof(city_buf), stdin)) return 1;
        city_buf[strcspn(city_buf, "\r\n")] = '\0';
        city_name = city_buf[0] ? city_buf : "this location";
    }

    Day history[MAX_DAYS];
    int n = load_csv(csv_path, history, MAX_DAYS);
    if (n < WINDOW + 30) {
        fprintf(stderr, "[main] Not enough data to train (got %d days)\n", n);
        return 1;
    }

    Sample *samples = (Sample *)malloc(sizeof(Sample) * n);
    int sample_count = build_samples(history, n, samples);

    printf("\n-- Training on %d days of history --\n", sample_count);
    float weights[N_FEATURES];
    train(samples, sample_count, weights);
    free(samples);

    printf("\nLearned weights: ");
    for (int j = 0; j < N_FEATURES; j++) printf("%.3f  ", weights[j]);
    printf("\n");

    forecast_and_print(history, n, weights, city_name);

    return 0;
}
