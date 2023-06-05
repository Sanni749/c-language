// write a program to print time date line and file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("file name is: %s\n", __FILE__);
    printf("today's date:%s\n", __DATE__);
    printf("time now is :%s\n", __TIME__);
    printf("line no is %d\n", __LINE__);
    return 0;
}