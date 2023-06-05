// writ a program strcmp, whitout library function..
#include <stdio.h>
int main()
{
    char str[30], str2[30];
    int i, j, test = 1;
    printf("enter a first string:");
    gets(str);
    printf("enter a second string:");
    gets(str2);
    for (i = 0; str[i] != '\0'; i++)
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str[i] == str2[j])
            {
                test = 0;
                break;
            }
        }
    if (test == 0)
        printf("\nboth string are equals");
    else
        printf("\nboth string are not equals");
    return 0;
}