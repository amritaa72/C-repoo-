
#include <stdio.h>

void main()
{
    
    struct datetime
    {
        struct date1
        {
            int dat;
            int month;
            int year;
        
        }d;
        struct time1
        {
            int hours;
            int minutes;
            int seconds;
        }t;
    }dt;
    
    printf("\n Enter  date(DD MM YYYY) ");
    scanf("%d %d %d", &dt.d.dat,&dt.d.month,&dt.d.year);
    
    printf("\n Enter  time(HH MM SS) ");
    scanf("%d %d %d", &dt.t.hours,&dt.t.minutes,&dt.t.seconds);
    
    printf("\nDate: %02d/%02d/%d", dt.d.dat, dt.d.month, dt.d.year);
    printf("\nTime: %02d:%02d:%02d\n", dt.t.hours, dt.t.minutes, dt.t.seconds);
}
