// write a program to swap the two value using pointer...
#include <stdio.h>
int main()
{
    int a, b, *x, *y, t;
    printf("enter a swaping number a and b:\n");
    scanf("%d\t%d", &a, &b);
    printf("befor swapping : \n a=%d\tb=%d", a, b);
    x = &a;
    y = &b;
    t = *y;
    *y = *x;
    *x = t;
    printf("\nAfter swaping: \na=%d \tb=%d", a, b);

    return 0;
}