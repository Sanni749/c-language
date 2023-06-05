#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    float marks;
} emp;

int main()
{
    printf("size of struct:%d", sizeof(emp));
    return 0;
}