
#include <stdio.h>

void main()
{
    struct student
    {
        char name[20];
        char USN[11];
        int marks;
    };
    //struct student s1;
    typedef struct student s1;

    
    s1 a,b,c;
    //a.name="Amritaa";
    //strcopy(a.)
    
    printf("ENTER NAME OF STUDENT\t");
    scanf("%s",&a.name);
    //char USNcp[];
    printf("\nENTER USN OF STUDENT\t");
    scanf("%s",&a.USN);
    //strcopy()
    printf("\nENTER MARK OF STUDENT\t");
    scanf("%s",&a.marks);
    
    printf("\n name %s",a.name);
    printf("\n usn %s",a.USN);
    printf("\n marks %d",a.marks);
}
