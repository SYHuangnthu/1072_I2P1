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
    p=&str[1];//���s���x��m
    p=str+1;//��|�N��O�@�ˣx
    int i=0;
    while(str[i]!='\0')
        //���P��*(str+i)���P��i[str]
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
    p=str;//P�O�����ܼơA�a�}�i�H��A���O�}�Cstr�����P���X�����

    scanf("%s", str);
    printf("%c\n", *p);//�@*�N�O�}���h���F��A
    printf("%s\n", p);
    printf("%c %c\n", *p,str[0]);
    printf("%c\n", *(p+1));//�[�@�N�O���U�@�����F��
    printf("%c %c\n",*str,p[0]);
    printf("%c %c\n",*(str+1),p[1]);
    return 0;
//���и�}�C���@��!!
}
*/

/*
//���g�m���D
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
    *p=*p*2+3;// *p�O���x�s�bx�x��
}

int main(void)
{
    int x=100;
    int * px;//��4�|pointer��
    double z=12.3;
    double * pz;
    px=&x;
    pz=&z;
//    x=f(x);
    printf("%p\n",px);//z�x��m
    printf("%p\n",pz);//i�x��m
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
