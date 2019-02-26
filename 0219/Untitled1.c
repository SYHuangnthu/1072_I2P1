#include <stdio.h>


int main(void)
{
    int x;
    int y;
    x = 5;
    y = 10;
    y = y/x;//注意y 是int，如果小數就GG
    printf("%10f", y);

    return 0;
}
