#include <stdio.h>

int main(void)
{
    int amount;
    double cost;
    char category;
    printf("Please stamp amount:\n");
    scanf("%d", &amount);
    printf("Please enter stamp category(E,A,T):\n");
    scanf(" %c", &category);
    switch (category)
    {
        case 'E':
            cost = amount * 0.23;
            break;
        case 'A':
            cost = amount * 0.7;
            break;
        case 'T':
            cost = amount * 0.15;
            break;
    }
    printf("Total cost: %lf\n", cost);
    return 0;
}