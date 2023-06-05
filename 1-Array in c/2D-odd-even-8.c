// wap to print 2D array martix odd and even
#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j, odd = 0, even = 0;
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
            if (arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
                odd++;
        }
    }
    printf("even number:%d\n", even);
    printf("odd number:%d", odd);
    return 0;
}
