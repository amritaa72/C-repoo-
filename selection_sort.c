//selection sort
#include <stdio.h>

void main() 
{
    int a[10];
    int i,j;
    int spos;
    int temp;
    printf("Read the array elements\t");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //sorting array
    for(i=0;i<10;i++)
    {
        spos=i;
        printf("%d",i);
        for(j=i+1;j<10;j++)
        {
            if(a[spos]>a[j])
            {
                spos=j;
                temp=a[spos];
                a[spos]=a[i];
                a[i]=temp;
                //printf("%d",a[j]);
            }
            //printf("\n %d",a[j]);
        }
        //printf("\n ");
    
    }
    
    printf("THE SORTED ARRAY ELEMENTS ARE: \t");
    for (i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }

}
