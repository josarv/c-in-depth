#include <stdio.h>

int main(void)
{
    int number;
    printf("Please insert an integer:\n");
    scanf("%d", &number);
    if(number % 2)
        printf("The number you entered is odd.\n");
    else
        printf("The number you entered is even.\n");
    return 0;
}