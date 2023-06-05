#include <stdio.h>
int main()
{
    printf("enter  lower charect:\n");
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\t", ch);
    }
    printf("\nenter  upper charect:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\t", ch);
    }

    return 0;
}