#include <stdio.h>
#define square(r) r *r
#define pi 3.14
int main()
{
    int r;
    printf("enter a reduas:");
    scanf("%d", &r);
    printf("the area of this circle is:%f", pi * square(r));
    return 0;
}