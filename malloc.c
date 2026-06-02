
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int n;
    int *ptr;
    
    printf("Enetr the number of elements\n");
    scanf("%d",&n);
    
    ptr=(int *)malloc (sizeof(int)*n);
    
    if(ptr==NULL)
    {
        printf("insufficient memory\n");
        return ;
        
    }
    
    printf("Enter %d elements\t",n);
    
    for (i =0; i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Array elements are\n");
    for (i =0; i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    
    
}
