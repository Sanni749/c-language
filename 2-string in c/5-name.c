#include <stdio.h>
int main()
{
    char name[30];
    printf("enter your name:");
    gets(name);
    printf("\nyour name is :%s", name);
    return 0;
}