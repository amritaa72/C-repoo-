#include <stdio.h>
//factorial of n using recursion

int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
    
}

void main()
{   
    int n=5;
    int res;
    res=fact(n);
    printf("Factorial is %d",res);

    //return 0;
}
