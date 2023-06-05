// w a p to print area of ciecle(area=3.14*r*r) user throught
#include <stdio.h>
int main()
{
    float r, area;
    printf("enter the radius=");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf(" area of circle:%f", area);
    return 0;
}