#include <stdio.h>
#include <math.h>
int square();
int rect();
int tri();
int circle();
void main()
{
    //int side, length,breadth, a,b,c,radius;
    //int areasq, arearect,areatri,areacir;
    printf("Area of square is %d ", square());
    printf("Area of rectangle is %d ", rect());
    printf("Area of triangle is %d ", tri());
    printf("Area of circle is %d ", circle());
}
int square()
{
    int side;
    printf("Read side of square\t");
    scanf("%d",&side);
    return side*side;
}
int rect()
{
    int len,bre;
    printf("Read side of rectangle\t");
    scanf("%d%d",&len,&bre);
    return len*bre;
}
int tri()
{
    int a,b,c,s;
    printf("Read side of triangle\t");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    return sqrt((s)*(s-a)*(s-b)*(s-c));
}
int circle()
{
    int rad;
    printf("Read radius of circle\t");
    scanf("%d",&rad);
    return 3.14*rad*rad;
}
