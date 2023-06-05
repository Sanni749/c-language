#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("thr value of a is:%d\n", *ptr);
    printf("thr value of a is:%d\n", *(&a));
    printf("thr address of a is:%d\n", &a);
    printf("thr address of a is:%d\n", *(&ptr));
    return 0;
}