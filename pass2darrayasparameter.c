//pgm to add 2 2d arrays
#include <stdio.h>
void add(int[][5],int[][5]);
int main()
{
    int a[5][5];
    int b[5][5];
    int i,j;
    
    printf("Read array a:  ");
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Read array b:  ");
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }    
    
    add(a,b);
}

void add (int a[][5],int b[][5])
{
    int c[5][5];
    int i,j;
    
    printf("\n ADDING THE ARRAYS");
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }   
    printf("\n RESULTANT ARRAY");
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }    
}
