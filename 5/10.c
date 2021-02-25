#include <stdio.h>

int main(void)
{
    char a, b, c;
    printf("Please insert three letters:\n");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("%c%c%c\n", c, b, a);
    return 0;
}