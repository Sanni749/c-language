#include <stdio.h>
int main()
{
    char str[30];
    printf("enter a name:");
    gets(str);
    printf("name is:%s", str);
    return 0;
}