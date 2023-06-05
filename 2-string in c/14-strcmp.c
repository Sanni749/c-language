#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], str2[30];
    int a;
    printf("enter a first string:");
    gets(str);
    printf("enter a second string:");
    gets(str2);
    a = strcmp(str, str2);
    if (a == 0)
        printf("both string are equals");
    else if (a < 0)

        printf("string 1 is less then string 2");

    else
        printf("string 1 is greater than string 2");
    return 0;
}