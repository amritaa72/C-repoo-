// Selection Sort implementation
#include <stdio.h>

int main(void)
{
    int a[10];
    int i, j, minIdx, temp;
    printf("Read the array elements (10 integers)\t\n");
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Selection sort: find the minimum element in the unsorted part and swap once
    for (i = 0; i < 9; i++) { // last element will already be in place
        minIdx = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        // swap only if a smaller element was found
        if (minIdx != i) {
            temp = a[i];
            a[i] = a[minIdx];
            a[minIdx] = temp;
        }
    }

    printf("THE SORTED ARRAY ELEMENTS ARE:\t");
    for (i = 0; i < 10; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
