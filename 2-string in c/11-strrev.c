#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("enter a string:");
    gets(str);
    strrev(str);
    printf("convet reverse string:%s", str);
    return 0;
}