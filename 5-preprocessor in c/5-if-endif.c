#include <stdio.h>
#define number 1
int main()
{
#if (number == 0)
    printf("1 value of number is :%d", number);
#endif
#if (number == 1)
    printf("2 value of number is :%d", number);
#endif
    return 0;
}