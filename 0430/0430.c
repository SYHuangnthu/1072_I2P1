#include<stdio.h>

void f(int* p)//p=&x;
{
    *p=*p*2+3;//*p�O���x�s�bx�x��
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
