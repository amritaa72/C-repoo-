//program to check whether the entered character is vowel or not 
#include <stdio.h>

int main()
{
    char input;
    printf("READ character input");
    scanf("%c",&input);
    if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
    {
        printf("its a vowel");
    }
    else
    {
        printf("it aint a vowel!");
    }
    return 0;
}
