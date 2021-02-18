#include <stdio.h>

int main(void)
{
    double a, b, c;
    printf("Please enter a number:\n");
    scanf("%lf", &a);
    printf("Please enter a second number:\n");
    scanf("%lf", &b);
    printf("Please enter a third number:\n");
    scanf("lf", &c);
    printf("The average of the numbers you entered is %f\n", (a + b + c) / 3);
    return 0;
}