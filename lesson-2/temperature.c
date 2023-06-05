#include <stdio.h>
int main()
{
    float fah, cel;
    printf("enter a celsius:");
    scanf("%f", &cel);
    // printf("enter a fahrenheit:");
    // scanf("%f", &fah);
    fah = (cel * 9 / 5) + 32;
    // cel = (fah - 32) * 5 / 9;
    printf("convert celsius to fahrenheit:%f", fah);
    // printf("\nconvert fahrenheit to celsius:%f", cel);
    return 0;
}