#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", ptr + 1);
    return 0;
}