/* C Program to Store Bank Transactions in a File and Calculate Total Balance */

#include <stdio.h>

int main()
{
    FILE *fp;
    float amount, balance = 0;
    int i;

    /* Open file for writing */
    fp = fopen("transactions.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter 5 bank transactions:\n");
    printf("(Use negative value for withdrawal)\n");

    for (i = 1; i <= 5; i++)
    {
        scanf("%f", &amount);
        fprintf(fp, "%.2f\n", amount);
    }

    fclose(fp);

    /* Open file for reading */
    fp = fopen("transactions.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    /* Read transactions and calculate balance */
    while (fscanf(fp, "%f", &amount) != EOF)
    {
        balance += amount;
    }

    fclose(fp);

    printf("Total Account Balance = %.2f\n", balance);

    return 0;
}