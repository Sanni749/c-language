#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("enter the upper letter:");
    gets(str);
    strlwr(str);
    printf("convet lower letter:%s", str);
    return 0;
}