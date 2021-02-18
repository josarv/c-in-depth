#include <stdio.h>

#define PI 3.141592

int main(void)
{
    double ratio;
    printf("Please enter the radius of the circle:\n");
    scanf("%lf", &ratio);
    printf("Circle circumference: %lf\nCircle area: %lf\n", 2 * PI * ratio, PI * ratio * ratio);
    return 0;
}