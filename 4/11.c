#include <stdio.h>

int main(void)
{
    int status, point, alarm, operation;
    printf("Please enter the status number:\n");
    scanf("%d", &status);
    point = (status & 240) >> 4;
    alarm = (status & 12) >> 2;
    operation = (status & 2) >> 1 ;
    if(!operation)
    {
        printf("Device encountered a problem.\n");
        return 1;
    }
    printf("Check point: %d, alarm:\n", point + 1);
    switch (alarm)
    {
        case 0:
            printf("No alarm\n");
            break;
        case 1:
            printf("Fire\n");
            break;
        case 2:
            printf("Breach\n");
            break;
        case 3:
            printf("Smoke\n");
            break;
    }
    return 0;
}