// wap 1D array print laegest number
#include <stdio.h>
int main()
{
    int arr[100];
    int i, max, n, min;
    printf("enter the element number:");
    scanf("%d", &n);
    printf("enter the array element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    if (min > arr[i])
        min = arr[i];
    printf("%d is smallest number", min);
    printf("\n%d is largest number", max);
    return 0;
}