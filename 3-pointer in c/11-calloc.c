#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    printf("enter the value:");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("the value at %d of this array is:%d\n", i, ptr[i]);
    }

    return 0;
}