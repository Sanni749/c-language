// write a program to store information of two emoloyees using structres..
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    int i;
    struct employee emp[5];
    printf("enter a record of 5 students");
    for (i = 0; i < 5; i++)
    {
        printf("\nenter a employees id:");
        scanf("%d", &emp[i].id);
        printf("\nenter a employees name:");
        scanf("%s", &emp[i].name);
        printf("\nenter a employees salary:");
        scanf("%f", &emp[i].salary);
    }
    printf("\nemployee information list:");
    for (i = 0; i < 5; i++)
    {
        printf("\nemployee id:%d,\temployee name:%s,\temployee salary:%f", emp[i].id, emp[i].name, emp[i].salary);
    }
    return 0;
}
