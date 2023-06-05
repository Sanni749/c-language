#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    float marks;
};
int main()
{
    int i, n;
    printf("enter a record student:");
    scanf("%d", &n);
    struct student std[n];
    printf("enter the %d student:", n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter name:");
        scanf("%s", std[i].name);
        printf("\n enter a total markes:");
        scanf("%f", &std[i].marks);
    }
    printf("\n student name and  total marks");
    for (i = 0; i < n; i++)
    {
        printf("\nstudent name:%s,\tstudent marks:%f", std[i].name, std[i].marks);
    }
    return 0;
}