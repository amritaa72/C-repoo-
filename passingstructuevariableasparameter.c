//passing strcuture variable as a parameter 
#include <stdio.h>

struct student 
{
    int x;
    int y;
};

typedef struct student s;

int add(s a)
{
    return (a.x)+(a.y);
}

void main()
{
    s a;
    int sum;
    printf("Enter the values for a and b");
    scanf("%d%d",&a.x,&a.y);
    sum=add(a);
    printf("%d",sum);
}
