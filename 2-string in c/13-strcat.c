#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], str2[30];
    printf("enter a first string:");
    gets(str);
    printf("enter a second string:");
    gets(str2);
    strcat(str, str2);
    printf("cut string:%s", str);
    return 0;
}