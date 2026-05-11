//5digit number entered in keyboard
//calc sum of digits using recursive function
#include <stdio.h>
int recsum(int);
void main()
{
    int a,t;
    printf("Enter number\t");
    scanf("%d",&a);
    
    t=recsum(a);
    
    printf("Sum of digit of %d is %d",a,t);
}

int recsum(int x)
{
    int tot=0,i=0,rem=0;
    if (x==0)
        return 0;
    else
        {   
            rem=x%10;
            tot=recsum(x/10)+rem;
            //i++;
            //x=x-(x*i);
        }
    return tot;
}
