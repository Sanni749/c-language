#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 20;
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    ptr = &a;
    printf("value of a:%d\n", *ptr);
    printf("address of a:%u", ptr);
    return 0;
}