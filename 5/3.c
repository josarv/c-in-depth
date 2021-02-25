#include <stdio.h>

int main(void)
{
    int option;
    printf("1-Display \"Hello\"\n2-Display \"2\"\n3-Display \"Bye-Bye\"\n4-Quit\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Hello\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("Bye-Bye\n");
        break;
    case 4:
        break;
    default:
        printf("Invalid input\n");
        break;
    }
}