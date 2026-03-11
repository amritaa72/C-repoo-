//program to print whether the person is eligible to vote 
#include <stdio.h>

void main(){
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("YOU ARE ELIGIBLE TO  VOTE");    
    }
}

