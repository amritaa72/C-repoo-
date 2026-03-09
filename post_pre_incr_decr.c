#include <stdio.h>

int main()
{
    int a=5;
    int c;
    c=a++;//post increment
    printf("%d\t",c);
    printf("%d\t",a);
    
    c=++a;//preincrement
    printf("%d\t",c);
    printf("%d\t",a);
    
    c=a--;//postdecrement
    printf("%d\t",c);
    printf("%d\t",a);
    
    c=--a;//predecrement
    printf("%d\t",c);
    printf("%d\t",a);
    
}
