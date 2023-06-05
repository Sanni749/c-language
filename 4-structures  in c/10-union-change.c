#include <stdio.h>
union change
{
    int a, b;
} ch;
int main()
{
    ch.a = 10;
    ch.b = 19;
    printf("\n a=%d\tb=%d", ch.a, ch.b);
    ch.b = 12;
    printf("\na=%d \t b=%d", ch.a, ch.b);
    return 0;
}