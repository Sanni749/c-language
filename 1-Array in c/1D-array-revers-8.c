// wap 1D array print revers user through
#include <stdio.h>
int main()
{
    int arr[5];
    int i, revers;
    printf("enter the array element:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array is :");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nenter the revers number:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}