#include <stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if (80 <= num && 100 > num)
    {
        printf("topper");
    }
    else if (60 <= num && 80 > num)
    {
        printf("first");
    }
    else
        printf("middle");
    return 0;
}