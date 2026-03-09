#include <stdio.h>

//reln operators

void main()
{
int a,b,c;
a=5;
b=17;

c=(a>b);
printf("%d\t",c);

c=(a<b);
printf("%d\t",c);

c=(a>=b);
printf("%d\t",c);

c=(a<=b);
printf("%d\t",c);

c=(a==b);
printf("%d\t",c);

c=(a!=b);
printf("%d\t",c);

c=!a;
printf("%d\t",c);
}
