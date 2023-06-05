#include <stdio.h>
int main()
{
    int a = 12, b = 10;
    printf("the output of the bitwise AND operator a&b is :%d", a & b);
    printf("\nthe output of the bitwise OR operator a|b is :%d", a | b);
    printf("\nthe output of the bitwise exclusive OR operator a^b is :%d", a ^ b);
    printf("\nthe output of the bitwise complement operator ~a is :%d", ~a);
    return 0;
}