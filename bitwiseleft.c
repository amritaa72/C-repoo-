//program to show the usage of << left shift operator
#include <stdio.h>
int main(){
    int b;
    int a=5;
    b=a<<1<<1;//no.of shifts
    //the same as b=a<<2; 
    printf("%d",b);
}
