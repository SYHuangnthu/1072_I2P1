#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    fahr = -40;
    celsius = 9 * (fahr - 32) / 5;
    printf("%d degrees Fahrenheit = %d degrees Celsius ", fahr, celsius);
    return 0;
}

