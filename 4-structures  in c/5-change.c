#include <stdio.h>
struct change
{
    int a, b, c;
};
int main()
{
    struct change ch = {.b = 2, .a = 1, .c = 3};
    printf("befor\n a=%d\tb=%d\tc=%d", ch.a, ch.b, ch.c);
    struct change ch1 = {.a = 0};
    printf("\n after:\na=%d", ch1.a);
    return 0;
}