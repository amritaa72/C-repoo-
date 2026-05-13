//call by val
#include <stdio.h>

int swap( int , int);//passing 2 addresses of integers as a parameters //prototyping

int swap(int p, int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}

void main()
{   
    int a=5;
    int b=10;
    
    

    int sum;
    sum=swap (a,b);
    printf("a=%d\t b=%d",a,b);
 
}
