//largest elemt of array
//smallest elemt of arr
//copy elemts of aar1 to arr2
//2nd largest elemnt
//posn of smallest elemt

#include <stdio.h>
void main()
{   
    int i;
    int a[5];
    int index=0;
    printf("READ ARRAY ELEMENTS\n");
    for (i=0;i<5;i++)
    {
        scanf(" %d",&a[i]);
    }
    int large=a[0],larger;
    for (i=1;i<5;i++)
    {
        if(a[i]>large)
        {
            larger=large;
            large=a[i];
            index=i;
        }
    }
    printf("\nLARGEST ELEMENT: %d",large);
    printf("\n2ND LARGEST ELEMENT: %d",larger);
    printf("INDEX OF 2ND LARGEST ELEMENT: %d",index);
    
    int small=a[0];
    for (i=1;i<5;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            index=i;
        }
    }
    printf("\nSMALLEST ELEMENT: %d",small);
    

}
