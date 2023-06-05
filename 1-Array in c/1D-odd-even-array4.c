// wap 1D array print even and odd

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int odd = 0, even = 0, i;
    printf("array is :");
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
    printf("\neven number:%d", even);
    printf("\nodd number:%d", odd);
    return 0;
}