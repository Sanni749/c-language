// wap 1D array print liner surching
#include <stdio.h>
int main()
{
    int a[5];
    int i, item, flog = 0;
    printf("enter the five array element:");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("\nenter the surch valu:");
    scanf("%d", &item);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == item)
        {
            flog = 1;
            break;
        }
    }
    if (flog == 1)
    {
        printf("number is found");
    }
    else

        printf("number is not found");

    return 0;
}