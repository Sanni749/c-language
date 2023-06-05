#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, sum = 0;
    int *ptr;
    printf("enter number of element:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter element of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    printf("sum:%d\n", sum);
    free(ptr);
    return 0;
}