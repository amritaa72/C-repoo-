/*passing structure through pointer */
#include <stdio.h>

struct student
{
    int x;
    int y;
};

typedef struct student s;

int add(s *p)
{
    return (p->x)+(p->y);
};

void main()
{
    s a;
    int sum;
    printf("Enter value of a and b\t");
    scanf("%d%d",&a.x,&a.y);
    sum=add(&a);
    printf("Sum\t%d",sum);
}
