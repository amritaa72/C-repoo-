//program to perform arithmetic op using switch chr '+','-'etc
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() 
{
    char choice;
    int a,b,res;
    fflush(stdin);
    printf("\n press\n + \t - \t * \t % \n");
    printf("ENTER YOUR CHOICE\t");
    scanf("%c",&choice);

    switch(choice){
        case '+':
            printf("ENTER a,b\t");
            scanf("%d%d",&a,&b);
            res=a+b;
            printf("%d",res);
            break;
        case '-':
            printf("ENTER a,b\t");
            scanf("%d%d",&a,&b);
            res=a-b;
            printf("%d",res);
            break;
        case '*':
            printf("ENTER a,b\t");
            scanf("%d%d",&a,&b);
            res=a*b;
            printf("%d",res);
            break;
        case '%':
            printf("ENTER a,b\t");
            scanf("%d%d",&a,&b);
            res=a%b;
            printf("%d",res);
            break;
        case '/':
            printf("ENTER a,b\t");
            scanf("%d%d",&a,&b);
            res=a/b;
            printf("%d",res);
            break;
        default:
            printf("INVALID INPUT");
            break;
    }
}
