// write a program to print information of tow employees using structures..
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
} e1, e2;
int main()
{
    struct employee e1 = {1, "Dileep kumar", 100000};
    struct employee e2 = {2, "Pankaj kumar", 120000};
    printf("employee 1 id:%d\n", e1.id);
    printf("employee 1 name:%s\n", e1.name);
    printf("employee 1 salary:%f\n", e1.salary);
    printf("employee 2 id:%d\n", e2.id);
    printf("employee 2 name:%s\n", e2.name);
    printf("employee 2 salary:%f\n", e2.salary);
    return 0;
}