#include<stdio.h>

int main(void)
{
    char* str[100];
    char* p;
    printf("%p", str);
    p=str;//P�O�����ܼơA�a�}�i�H��A���O�}�Cstr�����P���X�����

    scanf("%s", str);
    printf("%c\n", *p);//�@*�N�O�}���h���F��A
    printf("%s\n", p);
    printf("%c\n", *(p+1));//�[�@�N�O���U�@�����F��
    return 0;
//���и�}�C���@��!!
}
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
