// wap 1D array to print sum of even and sum of odd
#include <stdio.h>
int main()
{
    int arr[100], n;
    int odd = 0, even = 0, i;
    printf("enter a size element:");
    scanf("%d", &n);
    printf("enter the array element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array is:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    for (i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            even = even + arr[i];
        else
        {
            odd = odd + arr[i];
        }
    printf("\nsum of even number:%d", even);
    printf("\nsum of odd number:%d", odd);
    return 0;
}