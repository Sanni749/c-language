#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("5-put.text", "r");
    fputs("Dileep", ptr);
    fputs("kumar", ptr);
    fputs("raj", ptr);
    fclose(ptr);
    return 0;
}