// wap keep taking number as input from user until enters an odd number
#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    do
    {
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    return 0;
}