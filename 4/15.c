#include <stdio.h>

int main(void)
{
    unsigned int month, day, nth;
    printf("Please enter the month and day:\n");
    scanf("%d %d", &month, &day);
    if(month > 2)
        nth = (month - 1) * 30 - 2 + day;
    else
        nth = (month - 1) * 30 + day;
    printf("The day you entered is day no. %d of the year.\n", nth);
    return 0;
}