#include<stdio.h>

int main(void)
{
/*(1)
//    char name[10];//4快樂ㄉ陣列，可以當指位器喔
    char ch;//char有-128-127ㄉ八位元
//    int x;//int有32位元
    ch = 65;//單引號：字元，沒有單引號就是變數
    printf("%c\n", ch);
    ch = 'A';
    printf("%d\n", ch);
*/
/*(2)
    char name[10];

    scanf("%s", name);

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",
            name[0], name[1], name[2], name[3],
            name[4], name[5] );//殼以印出字元ㄉ數字ㄋ!
    printf("%s \n", name);
*/
/*(3)

    char name[10] = {'A', 'B', '\0', 'C','D'};
    //放ㄌ字元陣列卻沒有\0????
    printf("%s\n", name[0], name[1], name[2], name[3],
            name[4], name[5]);
    //%s沒看到\0只好一直讀下去(GG
*/
/*(4)
    char name[10];//大小 = 10
    scanf("%9s", name);
    //%9s可以限制name 剛好放九個字元
    printf("%s\n", name);
*/
/*
    double x;//64位元
    float z;//32位元

    scanf("%f", &z);
    scanf("%lf", &x);//double 要加lf喔,才可以用夠大的空間來傳

    printf("%f\n", z);
    printf("%2.5f\n", x);
    //居然可以不用管lㄋ!!!因為是印出來的表示法
    //printf ㄉ會自動升級成ˊ64位元ㄉlf，棒棒
    //把格式背起來!!!
*/
//玩一下sizeof()跟stringlenth
    double x;
    float z;
    printf("%lu %lu", sizeof(x), sizeof(z));
    //%lu = double ㄉ unsigned，size只會是兩倍大ㄉ正值


    return 0;
}
