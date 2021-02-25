#include <stdio.h>

int main(void)
{
    char input;
    printf("Please enter a character:\n");
    scanf("%c", &input);
    if(input >= 48 && input <=57)
        printf("%c\n", input);
    else if((input >= 65 && input <=90) || (input >= 97 && input <= 122))
        printf("%c\n", input + 1);
    return 0;
}