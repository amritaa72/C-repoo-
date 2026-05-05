#include <stdio.h>
#include <string.h>
//copy contents of source string to destination string using built in , display it finally
int main()
{
    
    char source[]="Shinchan";
    char destination[9];
    //int len;
    //int i=0;
    strcpy(destination,source);
    printf("%s",destination);
    //printf("%d",i);
    return 0;
}
