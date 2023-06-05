// wap 1D array print markes of average
#include <stdio.h>
int main()
{
    int markes[5], i;
    float average, sum = 0;
    printf("enter the markes:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &markes[i]);
    }
    for (i = 0; i < 5; i++)
        sum = sum + markes[i];
    average = sum / 5;
    printf("\naverage markes=%f", average);
    return 0;
}