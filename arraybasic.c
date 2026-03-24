//pgm to get sum of all items,even locn,odd locn, even sum, odd sum
#include <stdio.h>

void main()
{
     int a[10],i;//it allocates 40 bytes of memory
      
     printf("READ ARRAY ELEMENTS\n");
     for (i=0;i<10;i++)
     {
         scanf(" %d",&a[i]);
     }
     /*
     for (i=0;i<10;i++)
     {
         printf("\n%d",a[i]);
     }
     */
     //sum of even elements
     int evennosum=0;
     for (i=0;i<10;i++)
     {
         if (a[i]%2==0)
         {
             evennosum+=a[i];
         }
     }
     printf("\nSUM OF EVEN NUMBERS %d",evennosum);
     //sum of odd elements
     int oddnosum=0;
     for(i=0;i<10;i++)
     {
        if (a[i]%2!=0)
            {
                oddnosum+=a[i];
            }    
     }
     printf("\nSUM OF odd NUMBERS %d",oddnosum);
     
     //sum of elements at even index
    int evensum=0;
    for(i=0;i<10;i++)
     {
        if (i%2==0)
            {
                evensum+=a[i];
            }    
     }
      printf("\nSUM OF ELEMENTS AT EVEN INDICES  %d",evensum);
     //sum of elements at odd indices
    int oddsum=0;
    for(i=0;i<10;i++)
     {
        if (i%2!=0)
            {
                oddsum+=a[i];
            }    
     }
      printf("\nSUM OF ELEMENTS AT ODD INDICES  %d",oddsum);
    
    //sum of array elements
    int totsum=0;
    for(i=0;i<10;i++)
     {
        totsum+=a[i];
        
     }
     printf("\nSUM OF ALL ELEMENTS   %d",totsum);
    
}
