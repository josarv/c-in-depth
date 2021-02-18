#include <stdio.h>

int main(void)
{
    double amount, percentage;
    printf("Please enter an amount:\n");
    scanf("%lf", &amount);
    printf("Please enter a percentage:\n");
    scanf("%lf", &percentage);
    printf("Final amount: %lf\n", amount + amount * percentage);
    return 0;
}