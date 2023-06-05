// write a program to delete an element from an array element..
#include <stdio.h>
int main()
{
    int arr[100], c, postion, n;
    printf("enter a number of array element:");
    scanf("%d", &n);
    printf("enter a array element:");
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    printf("enter the delete element of position(1-%d):", n);
    scanf("\n%d", &postion);
    if (postion >= n + 1)
    {
        printf("\ndelete not posible");
    }
    else
    {
        for (c = postion - 1; c < n - 1; c++)
            arr[c] = arr[c + 1];
        printf("\nResultant array:");
        for (c = 0; c < n - 1; c++)
            printf("\n%d", arr[c]);
    }
    return 0;
}