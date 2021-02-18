#include <stdio.h>

int main(void)
{
    double fuel, cost, rate;
    printf("Please enter the amount of fuel:\n");
    scanf("%lf", &fuel);
    printf("Please enter the total cost:\n");
    scanf("%lf", &cost);
    rate = cost / fuel;
    if (rate > 1.7)
        printf("Expensive fuel.\n");
    else
        printf("Cheap fuel.\n");
    return 0;
}