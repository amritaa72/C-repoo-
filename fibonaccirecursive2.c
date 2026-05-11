//find first 25 fibonacci no.s using recursive func
#include <stdio.h>
int fib(int);
void main()
{
    //printf("Enter ")
    int terms=25,i,n=0;
    for(i=1;i<=terms;i++)
    {
        printf("%d\t",fib(n));
        n++;
    }

    
}
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
        return(fib(n-1)+fib(n-2));
}
