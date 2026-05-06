//pgm to convert a string to lower case
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="KJGjbukJGH";
    strlwr(str);
    printf("%s",str);
    strupr(str);
    printf("\n%s",str);

    return 0;
}
