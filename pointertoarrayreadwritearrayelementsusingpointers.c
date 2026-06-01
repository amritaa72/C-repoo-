//pointer to an array 
//to read and write array elements using pointers
#include <stdio.h>

void main()
{
    int a[10];
    int *p;
    p=a;
    for(int i=0;i<10;i++)
    {
        printf("\nEnter %d element\t",i);
        scanf("%d",(p+i));
        a[i]=*(p+i);
    }
    
    for(int i=0;i<10;i++)
    {
        
        printf("%d element\t",i);
        printf("%d",*(p+i));
    }
    
}
