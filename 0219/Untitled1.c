#include <stdio.h>


int main(void)
{
    int x;
    int y;
    x = 5;
    y = 10;
    y = (double)y/x + 0.5;//注意y 是int，如果小數就GG
    //左邊的y還是int，右邊的y改設成double就可以只加0.5就四捨五入囉
    printf("%10d", y);

    return 0;
}
