#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("2-file.text", "r");
    char str[30];
    fgets(str, 7, ptr);
    printf("the string is: %s\n", str);
    return 0;
}