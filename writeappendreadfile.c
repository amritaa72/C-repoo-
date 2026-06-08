//Program to Write, Read, and Append Data to a File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    /* Writing to a file */
    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: John\n");
    fprintf(fp, "USN: 1RV23CS001\n");
    fprintf(fp, "Marks: 85\n");

    fclose(fp);

    printf("Data written successfully.\n");

    /* Appending data to the file */
    fp = fopen("student.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "\nGrade: A");
    fclose(fp);

    printf("Data appended successfully.\n");

    /* Reading data from the file */
    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
