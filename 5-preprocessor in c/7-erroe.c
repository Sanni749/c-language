#include <stdio.h>
#include <math.h>
#ifndef _MATH_H
#error First includ then compile
#else
int main()
{
    float a;
    a = sqrt(9);
    printf("square root:%f", a);
}
#endif