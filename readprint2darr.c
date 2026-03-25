//pgm for 2d arrays
//pgm to read and print elemets of 2d arrays

#include <stdio.h>

void main()
{
    int a[4][4], i,j;
    printf("\nENTER ELEMNSTS OF  array ");
    for(i=0;i<4;i++)
    {
            
        //printf("\nENTER ELEMNSTS OF %d array ",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
            
        //printf("\nENTER ELEMNSTS OF %d array ", i+1);
        for(j=0;j<4;j++)
        {
            printf("\n %d",a[i][j]);
        }
    }   
    
}
