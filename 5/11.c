#include <stdio.h>

int main(void)
{
    int character;
    printf("Enter the ASCII code of a character:\n");
    scanf("%d", &character);
    printf("%d - %c\n", character, character);
    return 0;
}