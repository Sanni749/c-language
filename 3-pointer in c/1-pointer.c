#include <stdio.h>
int main()
{
    int a = 5;
    printf("valu of a:%d", a);
    printf("\naddress of a:%d", &a);
    printf("\nvalu of a:%d", *(&a));
    return 0;
}