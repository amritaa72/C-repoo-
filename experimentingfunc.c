
#include <stdio.h>
void add(int , int);
void sub(int,int);

int main()
{   
    int a,b;
    printf("Read a and b \t");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
/*
void add(int a, int b)
{
    int sum;
    sum=a+b;
    printf("SUM IS: \t %d \n", sum);
    return;
}

void sub(int a , int b)
{
    int diff;
    diff=a-b;
    printf("DIFFERENCE IS : \t %d \n", diff);
    add(a,b);
    return;
}
*/
void sub(int a , int b)
{
    int diff;
    diff=a-b;
    printf("DIFFERENCE IS : \t %d \n", diff);
    
    return;
}
void add(int a, int b)
{
    int sum;
    sum=a+b;
    printf("SUM IS: \t %d \n", sum);
    sub(a,b);
    return;
}

