#include <stdio.h>

int f(void)
{
    return 1000;
}
int main(void)
{
    //int x = 100;
    printf("%10d", f());

    return 0;
}
