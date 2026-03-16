//program to get roots of quadratic equation
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float main()
{
    float a,b,c,root, root1,root2, disc;
    printf("READ COEFFICIENT a, b and constant c\t");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0&&c==0)
    {
        printf("NOT POSSIBLE");
        exit(0);
    }
    else if (a==0 && b!=0)
    {
        root=-c/b;
        printf("\nLinear root =%f\n",root);
    }
    else
    {
        disc=(b*b)-(4*a*c);
        if(disc>0)
        {
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("\nTHE ROOTS ARE DISTINCT AND REAL\n");
            printf("The roots are: \n%f and \n%f",root1,root2);
        }
        else if(disc==0)
        {
            root1=root2=(-b)/(2*a);
            printf("THE ROOTS ARE REAL AND EQUAL \n");
            printf("The roots are : \n%f and \n%f",root1,root2);
        }
        else
        {
            root1=-b/(2*a);
            root2=sqrt(abs(disc))/(2*a);
            printf("\n THE ROOTS ARE IMAGINARY");
            printf("\n The first root is %f +i %f\n",root1,root2);
            printf("The second root is %f - i%f\n",root1,root2);
        }
    }
}
