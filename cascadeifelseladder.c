//program to print result of a student usin if else ladder
#include <stdio.h>

int main()
{
    float cgpa;
    printf("READ cgpa \n");
    scanf("%f",&cgpa);
    if(cgpa==10&&cgpa<=10)
    {
        printf("GRADE O");
    }
    else if(cgpa>=8)
    {
        printf("GRADE A+");
    }
    else if(cgpa>=7)
    {
        printf("GRADE A");
    }
    else if(cgpa>=6)
    {
        printf("GRADE B+");
    }
    else if(cgpa>=5)
    {
        printf("GRADE B");
    }
    else if(cgpa>=4)
    {
        printf("GRADE C+");
    }
    else
    {
        printf("GRADE F");
    }
    return 0;
}
