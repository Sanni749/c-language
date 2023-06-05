// wap keep taking number as input from user until enters a number which is multipal of 7;
#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    do
    {
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    return 0;
}