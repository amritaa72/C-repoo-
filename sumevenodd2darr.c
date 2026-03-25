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
    
    //sumeven
    int evensum=0;
    for(i=0;i<4;i++)
    {
        //printf("\nENTER ELEMNSTS OF %d array ", i+1);
        for(j=0;j<4;j++)
        {
            if (a[i][j]%2==0)
            evensum+=a[i][j];
        }
    }
    printf("\nSUM OF ALL EVEN ELEMENTS: %d",evensum);
    
    //sum odd
    int oddsum=0;
    for(i=0;i<4;i++)
    {
        //printf("\nENTER ELEMNSTS OF %d array ", i+1);
        for(j=0;j<4;j++)
        {
            if (a[i][j]%2!=0)
            oddsum+=a[i][j];
        }
    }
    printf("\nSUM OF ALL ODD ELEMENTS: %d",oddsum);
}
