// wap to print 2D array martix user through
#include <stdio.h>
int main()
{
    int arr[3][3];
    int r, c;
    printf("enter the array element:\n");
    for (r = 0; r < 3; r++)

    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
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
