#include <stdio.h>
//break

#include <stdlib.h>
#include <time.h>

void main()
{
    int i;
    int guess;
    printf("Guess the number\n");
    srand(time(NULL));
    int num=(rand()%100)+1;
    for(i=1;i<=10;i++)
    {
        printf("Guess %d \n",i);
        //printf("\n the number:  %d\n",num);
        printf("Enter your guess\t");
        scanf("%d",&guess);
        if(num==guess)
        {
            printf("guess was right");
            break;
        }
        else if (num!=guess)
        {
            if(guess>num)
                printf("Guess lower\n");
            else
                printf("Guess higher\n");
        }
    }
}
