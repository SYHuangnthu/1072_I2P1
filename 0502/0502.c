#include<stdio.h>
#include<string.h>

/*
//void * 可以暫時不要設房子類型，因為還沒要開門拿東西
void f(void * p, int i, int s)
{
    if(s==1)
    {
    ((char *)p)[i]++;
    }
    else if(s==4)//int 需要四ㄍbyte
    {
        ((int *)p)[i]++;
    }
}

int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8};
    char b[10]="abcdefgh";
    printf("%d\n", a[3]);
    printf("%c\n", b[2]);

    f(a,3,4);//陣列/第幾ㄍ/型別byte數
    f(b,2,1);
    printf("%d\n", a[3]);
    printf("%c\n", b[2]);

}

*/

/*
void f(int (*p) [][10], int row)//10一定要放喔
{
    for(int i =0;i<row;i++)
    {
        for(j=0;j<10;j++)
        {
            p[i][j]=i*j;
        }
    }
}
int main(void)
{
    int a[10][10];
    char b[10][10];
    int (*p) [10];
    char (*q) [10];

    f(a,5);

    p=a;
    q=b;

    printf("%p %p\n", p, p+3);//p+3是假ㄉ!眼睛業障重!
    printf("%p %p\n", p[3], &p[3][4]);

    //p[3][4]== *(*(p+3) +4)

}
*/
