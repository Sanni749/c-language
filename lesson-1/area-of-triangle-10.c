// w a p to print area of triangle(a=1/2*b*h) user throught
#include <stdio.h>
int main()
{
    float b, h;
    float area;
    printf("enter the base=");
    scanf("%f", &b);
    printf("enter the height=");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf(" area of triangle:%f", area);
    return 0;
}