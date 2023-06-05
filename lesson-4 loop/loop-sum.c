// write a program to print sum condtion not 0...
#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("enter a number=");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);
    printf("sum is =%d", sum);
    return 0;
}