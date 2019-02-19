#include <stdio.h>
void func1();
void func2();
int main(void)
{
    int x,y;
//    printf("Hello,\t world\n"); /*\ 換行 \t tab \"快樂ㄉ雙引號 \\ 顯示反斜線囉*/
//    printf("1234+5678\n");
//    printf("%d\n", 1234+5678);/*%d 十進位數*/
//    printf("%10d\n", 1234+5678);/*位數不夠會自己補上空格喔*/
//    printf("%07d\n", 1234+5678);/*07 空位補0*/
    scanf("%d %d", &x, &y); //&取得位置
    printf("%d\n", x*(y+3));
    func1();

    return 0;
}
void func1()
{
    printf("1\n");
    func2();

}
void func2()
{
    printf("2\n");

}
