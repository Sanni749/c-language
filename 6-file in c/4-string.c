#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("4-string.text", "r");
    char str[30];
    fgets(str, 10, ptr);
    printf("the string is: %s\n", str);
    fgets(str, 5, ptr);
    printf("the string is: %s\n", str);
    fclose(ptr);
    return 0;
}