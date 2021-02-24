#include <stdio.h>

int main(void)
{
    unsigned int time;
    printf("Please enter the time in seconds:\n");
    scanf("%d", &time);
    printf("The time you entered: %d hours, %d minutes, %d seconds\n", time / 3600, (time - (time / 3600) * 3600) / 60, time % 60);
    return 0;
}