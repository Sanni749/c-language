// w a p to print the sum of first & natural number
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nsum is %d", sum);
    return 0;
}