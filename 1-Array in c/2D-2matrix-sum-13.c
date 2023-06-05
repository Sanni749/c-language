// wap to print 2D array 2  sum of martix

#include <stdio.h>
int main()
{
    int arr[3][3], arr2[3][3], sum[3][3];
    int i, j, c;
    printf("enter the first array element:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter the first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("entre the second array element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("enter the second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("\nsum of martix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
            if (j == 3 - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
