// write a program to printf convert day to month..
#include <stdio.h>
int main()
{
    int months, days;
    printf("enter days:");
    scanf("%d", &days);
    months = days / 30;
    days = days % 30;
    printf("%d months %d days", months, days);
    return 0;
}