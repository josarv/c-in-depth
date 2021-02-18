#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    printf("Please enter the third integer: ");
    scanf("%d", &c);
    printf("The sum of %d,%d,%d is %d\nThe product of %d,%d,%d is %d\nThe average of %d,%d,%d is %d\n", a, b, c, a + b + c, a, b, c, a * b * c, a, b, c, (a + b + c) / 3);
    return 0;
}