#include <stdio.h>

int main(void)
{
    double height, weight;
    printf("Please enter height:\n");
    scanf("%lf", &height);
    printf("Please enter weight:\n");
    scanf("%lf", &weight);
    printf("Height: %lf, weight: %lf, BMI: %lf\n", height, weight, weight / (height * height));
    return 0;
}