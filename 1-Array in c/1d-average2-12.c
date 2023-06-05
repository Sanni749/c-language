// wap 1D array print to average ii
#include <stdio.h>
int main()
{
    int markes[100], i, n;
    float average, sum = 0;
    printf("enter a average size:");
    scanf("%d", &n);
    printf("enter the markes:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &markes[i]);
    }
    for (i = 0; i < n; i++)
        sum = sum + markes[i];
    average = sum / n;
    printf("\naverage markes=%f", average);
    return 0;
}