//program to find larest of 3no.s using cascade if
#include <stdio.h>
void main(){
    int a,b,c,large;
    printf("Read a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    large=a;
    if(b>a)
        large=b;
    if(c>large)
        large=c;
    printf("large%d",large);
    getch();
}
