//program to perform area of sq, rect, triangle 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() 
{
    int choice;
    printf("\n press\n 1 : SQUARE AREA \n 2: RECTANGLE AREA\n3: TRIANGLE AREA\n");
    printf("ENTER YOUR CHOICE\t");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            float side,sqarea;
            printf("ENTER SIDE OF SQUARE \t");
            scanf("%f",&side);
            sqarea=side*side;
            printf("area of square \t");
            printf("%f",sqarea);
            break;
        case 2:
            float length,breadth,rectarea;
            printf("ENTER LENGTH , BREADTH OF RECTANGLE \t");
            scanf("%f%f",&length,&breadth);
            rectarea=length*breadth;
            printf("area of reactangle \t");
            printf("%f",rectarea);
            break;
        case 3:
            float a,b,c,s,triarea;
            printf("ENTER dimensions of sides of TRIANGLE \t");
            scanf("%f%f%f",&a,&b,&c);
            s=(a+b+c)/2;
            triarea= sqrt(s*(s-a)*(s-b)*(s-c));
            printf("area of triangle \t");
            printf("%f",triarea);
            break;
            
        default:
            printf("INVALID INPUT");
            
    }
}
