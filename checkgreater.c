//program to check if a>b, if true-- print msg and terminate the program, false-- add a and c- print sum
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c,sum;
    printf("Read a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        printf("a is greater than b");
        exit(0); //terminate
    }
    sum=a+c;
    printf(" SUM OF A AND C %d",sum);
    
}
