// wap to print 2D array 2 multiplye of martix

#include <stdio.h>
int main()
{
    int arr[3][3], arr2[3][3], mul[3][3];
    int i, j, k;
    printf("enter the first array element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /*    printf("enter the first matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }*/
    printf("entre the second array element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    /*    printf("enter the second matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }*/
    printf("multiplye the martix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
