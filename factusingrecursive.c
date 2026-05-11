
#include <stdio.h>
int rec(int);
int main()
{
    int a,fact;
    printf("Enter the number\t");
    scanf("%d",&a);
    
    fact=rec(a);
    printf("\nFactorial of %d is %d",a,fact);
    
    return 0;
}
int rec(int x)
{
    int f;
    if(x==1)
        return 1;
    else
        f=x*rec(x-1);
    return f;
}
