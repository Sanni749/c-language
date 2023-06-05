// write a program to print information of employee(id,name,salary,phone)..
#include <stdio.h>
#include <string.h>
struct employee
{
    int eid;
    char name[50];
    float salary;
    double phone;
};
int main()
{
    int i, n;
    printf("enter a number of employees:");
    scanf("%d", &n);
    struct employee emp[5];
    printf("\nenter records of %d employee", n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter emp id:");
        scanf("%d", &emp[i].eid);
        printf("\nenter a name: ");
        scanf("%s", &emp[i].name);
        printf("\nenter a salary: ");
        scanf("%f", &emp[i].salary);
        printf("\nenter a mobile number:");
        scanf("%lf", &emp[i].phone);
    }
    printf("\nemployee information list:");
    for (i = 0; i < n; i++)
    {
        printf("\neid:%d,\tname:%s,\tsalary:%f,\tphone:%lf", emp[i].eid, emp[i].name, emp[i].salary, emp[i].phone);
    }
    return 0;
}