//b.C Program to Detect End of File (EOF) and Copy File Contents
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char ch;

    /* Open source file in read mode */
    source = fopen("C:\\Users\\aweso\\source.txt", "r");

    if (source == NULL) {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    /* Open destination file in write mode */
    destination = fopen("destination.txt", "w");

    if (destination == NULL) {
        printf("Destination file cannot be created.\n");
        fclose(source);
        return 1;
    }

    /* Read until End of File (EOF) and copy contents */
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}