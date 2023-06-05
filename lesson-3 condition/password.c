#include <stdio.h>
int main()
{
    int u1 = 1234, p1 = 4321;
    int u2, p2;
    printf("enter the userid::");
    scanf("%d", &u2);
    printf("\nenter a password::");
    scanf("%d", &p2);
    if (u1 == u2 && p1 == p2)
    {
        printf("true login");
    }
    else
    {
        printf("wrong userid and password !!");
    }
    return 0;
}