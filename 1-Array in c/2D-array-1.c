// wap to print 2D array martix
#include <stdio.h>
int main()
{
    int arr[3][3] = {{11, 22, 33}, {22, 33, 44}, {44, 55, 66}};
    int r, c;
    printf("enter the array:\n");
    for (r = 0; r < 3; r++)

    {
        for (c = 0; c < 3; c++)
        {
            printf("\t%d", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}