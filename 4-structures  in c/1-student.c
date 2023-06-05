// write a program to print students id and marke..
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[100];
    float marks;
};
int main()
{
    struct student e1;
    e1.id = 1;
    strcpy(e1.name, "Dileep kumar");
    e1.marks = 385;
    printf("student id:%d\n", e1.id);
    printf("student name:%s\n", e1.name);
    printf("student marks :%f", e1.marks);
    return 0;
}