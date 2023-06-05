#include <stdio.h>
int main()
{
    union text
    {
        int x;
        char y;
    } ch;
    ch.x = 65;
    union text *ch2 = &ch;
    printf("x=%d\ty=%c", ch2->x, ch2->y);
    return 0;
}