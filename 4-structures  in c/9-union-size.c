#include <stdio.h>
union eployee
{
    int id;
    char name;
    float marks;
} emp;

int main()
{
    printf("size of union:%d", sizeof(emp));
    return 0;
}