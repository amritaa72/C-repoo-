//obtain primefators of a positive number entered
#include <stdio.h>
int factor(int,int);
void main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("\nPrime fcators are: ");
    factor(n,2);
}

int factor(int n, int i)
{
    if(i<=n)
    {
        if (n%i==0)
        {
            printf(" %d",i);
            n=n/i;
        }
        else
            i++;
        factor(n,i);
    }

}
