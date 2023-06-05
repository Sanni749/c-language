#include <stdio.h>
#define number 1
int main()
{
#if (number == 0)
    printf(" value of number is :%d", number);
#else
    printf("value of number is non-zero");
#endif
    return 0;
}