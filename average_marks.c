/*If the marks obtained by a student in five different subjects are input 
through the keyboard, write a program to find out the aggregate marks 
and percentage marks obtained by the student. Assume that the 
maximum marks that can be obtained by a student in each subject is 
100. */

#include <stdio.h>

void main()
{
    float s1,s2,s3,s4,s5,avg,percent;
    printf("\nENTER MARKS OF SUBJECT 1 OUT OF 100");
    scanf("%f",&s1);

    printf("\nENTER MARKS OF SUBJECT 2 OUT OF 100");
    scanf("%f",&s2);    

    printf("\nENTER MARKS OF SUBJECT 3 OUT OF 100");
    scanf("%f",&s3);

    printf("\nENTER MARKS OF SUBJECT 4 OUT OF 100");
    scanf("%f",&s4);

    printf("\nENTER MARKS OF SUBJECT 5 OUT OF 100");
    scanf("%f",&s5);
    
    avg=(s1+s2+s3+s4+s5)/5;
    
    
    
    printf("AVERAGE:%f",avg);
    printf("\n PERCENTAGE : %f",avg);
    
    
    
}
