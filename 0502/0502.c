#include<stdio.h>
#include<string.h>

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
