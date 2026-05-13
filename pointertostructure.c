/*pgm to show pointer to structur -- addn of 2 numbers, print sum*/
#include <stdio.h>
struct data
{
   int x;
   int y;
};

void main()
{
    
    int sum;
    struct data a;
    struct data *p;
    
    p=&a;
    
    printf("\nEnter 2 no\t");
    scanf("%d%d",&p->x,&p->y);
    
    printf("\n SUM: %d",p->x+p->y);
    
}
