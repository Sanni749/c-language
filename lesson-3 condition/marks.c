#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-500):");
    scanf("%d", &marks);
    if (marks >= 300 && marks <= 500)
    {
        printf("pass\n");
    }
    else if (marks < 300 && marks > 0)
    {
        printf("fail");
    }
    else
        printf("wrong marks");
    return 0;
}