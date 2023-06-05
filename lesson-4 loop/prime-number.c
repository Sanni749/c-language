#include <stdio.h>
int main()
{
    int num, i = 2, flog = 0;
    printf("enter the number");
    scanf("%d", &num);
    while (i < num / 2)
    {
        if (num % i == 0)
            flog = 1;
        break;
        i++;
    }
    if (flog == 1)

        printf("number is not prime");
    else
        printf("number is  prime");

    return 0;
}