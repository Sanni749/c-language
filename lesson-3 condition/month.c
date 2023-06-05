// write a program to print month..
#include <stdio.h>
int main()
{
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    printf("enter a month (1-12):");
    scanf("%d", &n);
    if (n <= 12)
    {
    }
    if (n <= 12)
        printf("%d day ", arr[n - 1]);
    else
        printf("Invalid month");
    return 0;
}