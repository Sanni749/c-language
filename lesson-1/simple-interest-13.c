// w a p to print calculation of simple interest(si=p*r*t/100) user throught

#include <stdio.h>
int main()
{
    int amt, time;
    float rate, si;
    printf("enter the amount=");
    scanf("%d", &amt);
    printf("enter the rate=");
    scanf("%f", &rate);
    printf("enter the time=");
    scanf("%d", &time);
    si = (amt * rate * time) / 100;
    printf(" simple interest:%f", si);
    return 0;
}