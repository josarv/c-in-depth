#include <stdio.h>

int main(void)
{
    char input;
    printf("Please enter a character:\n");
    scanf("%c", &input);
    if(input >= 97 && input <= 122)
        printf("%c\n", input);
    else if(input >= 48 && input <=57)
        printf("You entered a digit.\n");
    return 0;
}