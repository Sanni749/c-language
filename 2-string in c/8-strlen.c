#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int len;
    printf("enter a string:");
    gets(str);
    len = strlen(str);
    printf("the langth is:%d", len);
    return 0;
}