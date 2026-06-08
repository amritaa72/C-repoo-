#include <stdio.h>
int main()
{
    FILE *fp;
    int i;
    float amount, balance=0;
    fp=fopen("transactions.txt","w");
    if (fp==NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }
    printf("Enter 5 transaction amount:\n";
    printf("Enter negative value for withdrawal\n");
    for (i=0;i<5;i++)
    {
        scanf("%.2f",&amount);
        fprintf(fp,"%.2f\n",amount);
        //balance=balance+amount;

    }
    fclose(fp);

    fp= fopen(transcation.txt,"r");
    if(fp==NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    while(fscanf(fp,"%.2f",&amount)!=EOF)
    {
        balance+amount;
    }
    fclose(fp);
    printf("Total account balance: %.2f\n", balance);
    return 0;
}
