// wap to print 2D array martix sum of digonal
#include <stdio.h>
int main()
{
    int arr[3][3];
    int r, c, sum = 0, sum1 = 0;
    printf("enter the array:\n");
    for (r = 0; r < 3; r++)

    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("\t%d", arr[r][c]);
        }
        printf("\n");
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r == c)
            {
                sum = sum + arr[r][c];
            }
            if (r + c == 2)
            {
                sum1 = sum1 + arr[r][c];
            }
        }
    }
    printf("digonal sum left to right :%d", sum);
    printf("\ndigonal sum right to left :%d", sum1);
    return 0;
}
