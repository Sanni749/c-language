#include <stdio.h>
struct change
{
    int a, b;
};
int main()
{
    struct change ch = {0, 1};
    printf("befor\n a=%d\tb=%d", ch.a, ch.b);
    ch.a = 10;
    printf("\n after:\na=%d \t b=%d", ch.a, ch.b);
    return 0;
}