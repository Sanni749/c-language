#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("enter the factorial number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial number:%d\n", fact);
    return 0;
}