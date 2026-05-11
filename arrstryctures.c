//pgm to implement array of structures
#include <stdio.h>

void main()
{
    int i;
    int n;
    struct student
    {
        char USN[10];
        char name[30];
        int marks;
        
    };
    struct student cs[10];

    printf("Enter number of entries");
    scanf("\t%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("ENTER NAME OF STUDENT\t");
        scanf("%s",&cs[i].name);
        
        printf("\nENTER USN OF STUDENT\t");
        scanf("%s",&cs[i].USN);
    
        printf("\nENTER MARK OF STUDENT\t");
        scanf("%d",&cs[i].marks);
    }

    
}
