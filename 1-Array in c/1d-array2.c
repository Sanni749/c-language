// wap print to array

#include <stdio.h>
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    printf("enter a array:");
    for (int i = 0; i < 5; i++)
        printf("\t%d", array[i]);
    return 0;
}