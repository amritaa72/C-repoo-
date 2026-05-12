//passing strcuture member  as parameter 
#include <stdio.h>

struct student 
{
    int x;
    int y;
};

typedef struct student s;

int add(int a, int b)
{
    return a+b;
}

void main()
{
    s a;
    int sum;
    printf("Enter the values for a and b");
    scanf("%d%d",&a.x,&a.y);
    sum=add(a.x,a.y);
    printf("%d",sum);
}
