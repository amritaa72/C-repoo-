//pgm for 2d arrays
//pgm to read and print elemets of 2d arrays
//pgm to find sum of 2d array elements

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
    
  
    
    //sum
    int sum=0;
    for(i=0;i<4;i++)
    {
        //printf("\nENTER ELEMNSTS OF %d array ", i+1);
        for(j=0;j<4;j++)
        {
            sum+=a[i][j];
        }
    }   
    printf("\nSUM OF ALL ELEMENTS: %d",sum);
}
