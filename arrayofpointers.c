//array of pointers
//To print 5,10,15, 20 present at a b c d using array of pointers

#include <stdio.h>

void main()
{
    int *p[5];
    int a=5, b=10, c=15, d=20, e=25;
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    p[3]=&d;
    p[4]=&e;
    for (int i=0;i<5;i++)
    {
        printf("\n%d",*p[i]);
    }
}
