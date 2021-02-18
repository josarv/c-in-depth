#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Please enter an integer:\n");
    scanf("%d", &a);
    printf("Please enter a second integer:\n");
    scanf("%d", &b);
    printf("Please enter a third integer:\n");
    scanf("%d", &c);
    printf("The largest of the three is: %d\n", a > b? a > c? a : c : b > c? b : c);
    return 0;
}