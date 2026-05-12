//simple program for pointers
#include <stdio.h>

void main()
{
    int a=5;
    int * p;
    p=&a;
    printf("p\t %d",p);
    printf("\n");
    printf("*p \t %d",*p); //dereferencing operator

}
