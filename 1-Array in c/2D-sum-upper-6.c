// wap to print 2D array martix sum of upper case
#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j, sum = 0;
    printf("enter the array element:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter the array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("sum of upper triangle matrix:%d", sum);
    return 0;
}
