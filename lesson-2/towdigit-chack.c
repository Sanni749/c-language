#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (9 < num && 100 > num)
    {
        printf("two digit number");
    }
    else
        printf("no tow digit number");
    return 0;
}