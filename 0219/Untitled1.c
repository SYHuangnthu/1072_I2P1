#include <stdio.h>


int main(void)
{
    int x;
    double z = 3.14;

    printf("0: Z*2, 1: z/2\n");

    scanf("%d", &x);
//    scanf("%lf", &z);

    z = (1-x)*(z*2) + x*(z/2);//不用if-elseㄉ二元選擇運算MAGIC!!!!(欸

    printf("%f", z);
//    printf("%d\n", x*2);
//    printf("%f\n", z/3);

    return 0;
}
