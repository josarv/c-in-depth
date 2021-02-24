#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter an integer:\n");
    scanf("%d", &number);
    printf("The least significant digit of the number you entered: %d\n", number % 10);
    return 0;
}