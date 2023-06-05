#include <stdio.h>
int main()
{
    int arr[100], c, n, value, postion;
    printf("enter a number of array element:");
    scanf("%d", &n);
    printf("enter a array element:");
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    printf("enter the insert element of position(1-%d):", n);
    scanf("\n%d", &postion);
    printf("\nenter the value to insert:");
    scanf("%d", &value);
    for (c = n - 1; c >= postion - 1; c--)
        arr[c + 1] = arr[c];
    arr[postion - 1] = value;
    printf("\nResultant array:");
    for (c = 0; c <= n; c++)
        printf("\t%d", arr[c]);
    return 0;
}