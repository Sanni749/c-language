#include <stdio.h>
int main()
{
    char u1[10], u2 = 'dileep';
    int p1;
    int p2 = 865;
    printf("enter the userid::");
    gets(u1);

    printf("\nenter a 8 digit password::");
    scanf("%d", &p1);
    if (u2 == u1 && p2 == p1)
    {
        printf("true login");
    }
    else
    {
        printf("wrong userid and password !!");
    }
    return 0;
}