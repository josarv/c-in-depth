#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Please enter two integers (seperated by ,*):\n");
    scanf("%d,*%d", &a, &b);
    printf("Sum = %d\n", a + b);
    return 0;
}