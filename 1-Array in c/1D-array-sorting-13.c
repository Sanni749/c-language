// wap to print sorting ascendig order....
#include <stdio.h>
int main()
{
    int arr[5], i, j, temp;
    printf("enter the five element:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nenter the (ascending order) sorting element:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}