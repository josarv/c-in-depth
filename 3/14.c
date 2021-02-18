#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Please enter an integer:\n");
    scanf("%d", &a);
    printf("Please enter a second integer:\n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("First integer: %d\nSecond integer: %d\n", a, b);
    return 0;
}