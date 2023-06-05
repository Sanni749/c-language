// wap 1D array print even and odd user through
#include <stdio.h>
int main()
{
    int arr[5];
    int odd = 0, even = 0, i;
    printf("enter the array element:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", arr[i]);
    }
    for (i = 0; i < 5; i++)
        if (arr[i] % 2 == 0)
            even++;
        else
        {
            odd++;
        }
    printf("\ntotal even number:%d", even);
    printf("\ntotal odd number:%d", odd);
    return 0;
}