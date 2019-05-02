#include<stdio.h>
#include<string.h>
//創造二維陣列ㄉ假象，講義裡面再看看
int main(void)
{
    int a[30];
    int* p[5];
    int i,j;
    for(i=0;i<30;i++)a[i]=i;
    for(i=0;i<5;i++) p[i]= &a[i*6];
    for(i=0;i<=5;i++){
        printf("%4d", p[i][j]);
    }
    printf("\n");
    return 0;
}
/*
int main(void)
{
    int a[100];
    int *p[100];//抄門牌號碼用的本子,可以不動a就改順序喔
    int *q[100];
    int i;
    for(i=0;i<100;i++)
    {
        p[i] =&a[i*2+1];
        q[i] =&a[i*2];
    }


//    p[0] = &a[1];把a[1]的門牌號碼抄到p[0]筆記本上

    for(i=0;i<100;i++)
        printf("%d\n", *p[i]);

    return 0;

    return 0;
}
*/

/*
//講義ㄉ特殊法：memcpy(輸出,輸入,sizeof(型別))

//把前面的內容複製到後面
void f(void * p, void * q, int s, int n)
{
    int i;
    char *x;
    char *y;
    x=(char*)p;
    y=(char*)q;
    for(i=0;i<n*s;i++)
    {
        y[i]=x[i];//法三

        //法二 *(y+i)=*(x+i);

        // 法一*((char *)q+i)= *((char *)p+i);//
    }
}
int main(void)
{
    int a[100];
    int b[100];
    char c[100];
    char d[100];
    int i,j;

    for(i=0;i<100;i++) a[i]=i;
    for(j=0,i='A';i<='Z';j++,i++) c[j]=i;
    //strcpy法，用在char，要記得設結尾
    c[j]='\0';
    strcpy(d, c);

    //把後面複製到前面
    memcpy(b,a,sizeof(int)*50);
//    memcpy(d,c,sizeof(char)*50);

    //strcat法
//    strcat(d,c);



//土法煉鋼法
//    f(a, b, sizeof(int), 50);
//    f(c, d, sizeof(char),50);

    for(i=0;i<50;i++)
        printf("%d ", b[i]);
    printf("\n");
    for(i=0;i<50;i++)
        printf("%c ", d[i]);
    printf("\n");
    return 0;
}
*/

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
