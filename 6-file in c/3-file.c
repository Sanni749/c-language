#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("3-file.text", "r");
    char c = fgetc(ptr);
    printf("the character 1 read was %c\n", c);
    c = fgetc(ptr);
    printf("the character 2 read was %c\n", c);
    fclose(ptr);
    return 0;
}