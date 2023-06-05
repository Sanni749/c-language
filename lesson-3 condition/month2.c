// write a program to convert days into years,months and weeks..
#include <stdio.h>
int main()
{
    int days, years, weeks, months;
    printf("enter a days:");
    scanf("%d", &days);
    years = days / 365;
    weeks = days / 7;
    months = days / 30;
    printf("\n%d years %d months %d weeks", years, months, weeks);

    return 0;
}