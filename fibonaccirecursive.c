#include <stdio.h>
//fibonacci series 

void fib(int n, int prev1, int prev2)
{
    //acts as stopping condition
    int cur;
    if(n<3)
        return;
    cur=prev1+prev2;
    printf("%d\t",cur);
    return fib(n-1, prev2,cur);
}
void printfib(int n)
{
    if(n<1)
        printf("Invalid number of terms");
    else if(n==1)
        printf("%d",0);
    else if(n==2)
        printf("%d\t%d\t",0,1);
    else
    {
        printf("%d\t%d\t",0,1);
        fib(n,0,1);
    }
    
}

void main()
{   
    int n=9;
    printfib(n);//doesnt return value
    //printf("Factorial is %d",res);

    //return 0;
}
