#include<stdio.h>
#include<string.h>
//�гy�G���}�C�x���H�A���q�̭��A�ݬ�
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
    int *p[100];//�۪��P���X�Ϊ����l,�i�H����a�N�ﶶ�ǳ�
    int *q[100];
    int i;
    for(i=0;i<100;i++)
    {
        p[i] =&a[i*2+1];
        q[i] =&a[i*2];
    }


//    p[0] = &a[1];��a[1]�����P���X�ۨ�p[0]���O���W

    for(i=0;i<100;i++)
        printf("%d\n", *p[i]);

    return 0;

    return 0;
}
*/

/*
//���q�x�S��k�Gmemcpy(��X,��J,sizeof(���O))

//��e�������e�ƻs��᭱
void f(void * p, void * q, int s, int n)
{
    int i;
    char *x;
    char *y;
    x=(char*)p;
    y=(char*)q;
    for(i=0;i<n*s;i++)
    {
        y[i]=x[i];//�k�T

        //�k�G *(y+i)=*(x+i);

        // �k�@*((char *)q+i)= *((char *)p+i);//
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
    //strcpy�k�A�Φbchar�A�n�O�o�]����
    c[j]='\0';
    strcpy(d, c);

    //��᭱�ƻs��e��
    memcpy(b,a,sizeof(int)*50);
//    memcpy(d,c,sizeof(char)*50);

    //strcat�k
//    strcat(d,c);



//�g�k�ҿ��k
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
//void * �i�H�Ȯɤ��n�]�Фl�����A�]���٨S�n�}�����F��
void f(void * p, int i, int s)
{
    if(s==1)
    {
    ((char *)p)[i]++;
    }
    else if(s==4)//int �ݭn�|�|byte
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

    f(a,3,4);//�}�C/�ĴX�|/���Obyte��
    f(b,2,1);
    printf("%d\n", a[3]);
    printf("%c\n", b[2]);

}

*/

/*
void f(int (*p) [][10], int row)//10�@�w�n���
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

    printf("%p %p\n", p, p+3);//p+3�O���x!�����~�٭�!
    printf("%p %p\n", p[3], &p[3][4]);

    //p[3][4]== *(*(p+3) +4)

}
*/
