#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("1-file.text", "r");
    char c = fgetc(ptr);
    printf("the character 1 read was %c\n", c);
    return 0;
}