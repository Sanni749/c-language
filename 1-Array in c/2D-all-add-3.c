// wap to print 2D array sum of all element
#include <stdio.h>
int main()
{
    int arr[3][3];
    int r, c, sum = 0;
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
    printf("all element sum:");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            sum = sum + arr[r][c];
        }
    }
    printf("%d", sum);
    return 0;
}
