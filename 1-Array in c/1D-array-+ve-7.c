// wap 1D array print +ve / -ve number
#include <stdio.h>
int main()
{
    int arr[5];
    int positive = 0, nigetive = 0, i;
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
        if (arr[i] > 0)
            positive++;
        else
        {
            nigetive++;
        }
    printf("\ntotal positive number:%d", positive);
    printf("\ntotal negetive number:%d", nigetive);
    return 0;
}