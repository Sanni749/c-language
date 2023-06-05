#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("enter the lower letter:");
    gets(str);
    strupr(str);
    printf("convet upper letter:%s", str);
    return 0;
}