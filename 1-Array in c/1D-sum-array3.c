// wap 1D array with sum
#include <stdio.h>
int main()
{
    int array[5], i, sum = 0;
    printf("enter a array element:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", array[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }
    printf("\nsum=%d", sum);
    return 0;
}