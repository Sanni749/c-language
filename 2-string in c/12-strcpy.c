#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], str2[30];
    printf("enter a string:");
    gets(str);
    strcpy(str2, str);
    printf("copy string:%s", str2);
    return 0;
}