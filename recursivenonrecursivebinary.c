//find binary equivalent of number through non recursive and recursive
#include <stdio.h>
//non recursive

void binary(int n)
{
    for(int i=31;i>=0;i-- )
    {
        int bit= (n>>i)&1;
        printf("\n");
        printf("%d",bit);
    }
}
void recursivebinary(int n)
{
    if(n>1)
        recursivebinary(n/2);
    printf("%d",n%2);
    
}
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    binary(a);
    printf("\n");
    recursivebinary(a);
}
//recursive
