//program to show whether selling the product has caused a profit or a loss
#include <stdio.h>
void main() 
{
    float cp, sp, pl,profit,loss;
    printf("ENTER COST-PRICE\t");
    scanf("%f",&cp);
    printf("\nENTER SELLING PRICE\t");
    scanf("%f",&sp);
    pl=sp-cp;
    if(pl>0)
    {
        printf("OVERALL PROFIT\n");
        profit=(pl/cp)*100;
        printf("PROFIT PERCENT: \t%f",profit);
    }
    else if(pl<0)
    {
        printf("OVERALL LOSS \n");
        loss=(pl/cp)*100;
        printf("LOSS PERCENT: \t%f",loss);
    }
}
