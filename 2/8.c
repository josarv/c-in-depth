#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int a = rand(), b = rand(), c = rand();
    float average = (a + b + c) / 3.0; 
    return 0;
}
