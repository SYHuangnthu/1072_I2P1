#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char str[100];
    char rts[100];
    scanf("%s", str);
    scanf("%s", rts);
    if(strcmp(str,rts,5)==0) printf("equal\n");
    return 0;

}

/*
int main(void)
{
    char str[100];
    char *p;
    scanf("%s", str);

    p=&str[-1];
    p =str-1;
    int i;
    for(i=1;i<=10;i++)
    {
        p[i]=i*i;
        printf("%c",str[i]);
//        p[i]==*[p+i]==*(str-1+i)
    }
    printf("\n");
    return 0;
}
*/

/*

int main(void)
{
    char str[100];
    char *p;
    scanf("%s", str);
    p=&str[1];//取編號ㄉ位置
    p=str+1;//兩ㄍ意思是一樣ㄉ
    int i=0;
    while(str[i]!='\0')
        //等同於*(str+i)等同於i[str]
    {
//        printf("%c", str[i]);
        printf("%c", toupper(str[i]));
        i++;
    }
    printf("\n");
    return 0;
}

*/

/*
unsigned long mylen1(char* p)
{
    char *q;
    q=p;
    while(*p!='\0') p=p+1;
    return p=q;
}
unsigned long mylen1(char* p)
{
    int i=0;
    while (*(p+i)!='\0')i++;
    return i;

}


int main(void)
{
    char str[100];
    scanf("%s",str);
    printf("%p\n",str);

    printf("%lu\n", mylen(str));
    return 0;
}
*/

/*
int main(void)
{
    char str[100];
    char* p;
    printf("%p", str);
    p=str;//P是指標變數，地址可以改，但是陣列str的門牌號碼不能改

    scanf("%s", str);
    printf("%c\n", *p);//　*就是開門去拿東西，
    printf("%s\n", p);
    printf("%c %c\n", *p,str[0]);
    printf("%c\n", *(p+1));//加一就是拿下一號的東西
    printf("%c %c\n",*str,p[0]);
    printf("%c %c\n",*(str+1),p[1]);
    return 0;
//指標跟陣列不一樣!!
}
*/

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
