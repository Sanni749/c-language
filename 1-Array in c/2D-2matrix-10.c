// wap to print 2D array 2 martix
#include <stdio.h>
int main()
{
    int arr[3][3] = {{11, 22, 33}, {22, 33, 44}, {44, 55, 66}};
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int r, c;
    printf("enter the first martix:\n");
    for (r = 0; r < 3; r++)

    {
        for (c = 0; c < 3; c++)
        {
            printf("\t%d", arr[r][c]);
        }
        printf("\n");
    }
    printf("enter the second martix:\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("\t%d", arr2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
