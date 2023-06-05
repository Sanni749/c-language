#include <stdio.h>
union test1
{
    int x;
    int y;
} t1;
union test2
{
    int x;
    char y;
} t2;
union test3
{
    char arr[20];
    int y;
} t3;
int main()
{
    printf("size of(t1)=%d,\tsize of(t2)=%d,\tsize of(t3)=%d", sizeof(t1), sizeof(t2), sizeof(t3));
    return 0;
}
