// wap to print 2D array martix row and colum user through
#include <stdio.h>
int main()
{
    int arr[100][100];
    int r, c, n, m;
    printf("enter the array row and colum:\n");
    scanf("%d%d", &n, &m);
    printf("enter the array:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    printf("enter the array:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            printf("\t%d", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}
