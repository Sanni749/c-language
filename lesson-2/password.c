#include <stdio.h>
int main()
{
    int pass, num = 12345;
    printf("enter a password:");
    scanf("%d", &pass);
    if (num == pass)
    {
        printf("successful\n");
        printf("Thanks");
    }
    else
    {
        printf("Unsuccessful\n");
        printf("tri agin");
    }
    return 0;
}