// write a program strlen, without libray function..
#include <stdio.h>
int main()
{
    char ch[100];
    int i;
    printf("enter a charter:");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
        ;
    printf("%d", i);
    return 0;
}