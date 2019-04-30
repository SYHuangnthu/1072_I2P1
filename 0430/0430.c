#include<stdio.h>

int main(void)
{
    char* str[100];
    char* p;
    printf("%p", str);
    p=str;//P是指標變數，地址可以改，但是陣列str的門牌號碼不能改

    scanf("%s", str);
    printf("%c\n", *p);//　*就是開門去拿東西，
    printf("%s\n", p);
    printf("%c\n", *(p+1));//加一就是拿下一號的東西
    return 0;
//指標跟陣列不一樣!!
}
/*
//本週練習題
void swap(int* p,int* q)
{
    int tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;

}
int main(void)
{
    int x,y;
    x=5;
    y=7;
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
*/

/*
void f(int* p)//p=&x;
{
    *p=*p*2+3;// *p是取儲存在xㄉ值
}

int main(void)
{
    int x=100;
    int * px;//挖4ㄍpointer欸
    double z=12.3;
    double * pz;
    px=&x;
    pz=&z;
//    x=f(x);
    printf("%p\n",px);//zㄉ位置
    printf("%p\n",pz);//iㄉ位置
    printf("%lu %lu\n", sizeof(x),sizeof(px));
    printf("%lu %lu\n", sizeof(z),sizeof(pz));

    *px=200;
    *pz=23.4;

    printf("%d\n", *px);
    printf("%f\n", *pz);
    f(&x);
    printf("%d\n",x);
    return 0;
}
*/
