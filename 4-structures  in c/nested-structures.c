#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    struct date
    {
        int dd;
        int mm;
        int yyyy;
    } doj;
} e;
int main()
{
    struct employee e = {1, "dileep kumar"};
    struct date doj = {18, 8, 2022};
    printf("employee id:%d,\nemployee name:%s", e.id, e.name);
    printf("\nemployee date of joining(dd/mm/yyyy):%d/%d/%d\n", doj.dd, doj.mm, doj.yyyy);
    return 0;
}
