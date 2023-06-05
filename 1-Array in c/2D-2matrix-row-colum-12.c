// wap to print 2D array 2 martix row and colum user through
#include <stdio.h>
int main()
{
    int arr[100][100], arr2[100][100];
    int r, c, n, m;
    printf("the first array size of row and colum:");
    scanf("%d%d", &n, &m);
    printf("enter the first array element:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    printf("enter the first array:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            printf("\t%d", arr[r][c]);
        }
        printf("\n");
    }
    printf("the second array size of row and colum:");
    scanf("%d%d", &n, &m);
    printf("enter the second array element:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            scanf("%d", &arr2[r][c]);
        }
    }
    printf("enter second the array:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            printf("\t%d", arr2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
