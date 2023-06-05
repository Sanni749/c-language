// WAP to array user through 1
#include <stdio.h>
int main()
{
    int array[5], i;
    printf("enter a five number:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("array is:");
    for (i = 0; i < 5; i++)

        printf("\t%d", array[i]);
    return 0;
}