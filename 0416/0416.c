#include<stdio.h>
#define N 6
char board[N][N];//�����ոլݤG��}�C�x�s

void dec2bin(int);//��Q�i���G�i��
int main(void)
{
    int n;
    scanf("%d", &n);
    dec2bin(n);
    return 0;
}
void dec2bin(int n)//�λ��j�x�ܴN�i�H����̰ܳ����
{
    if(n==0)
    {
        printf("0");
    }
    else if(n==1)
    {
        printf("1");
    }
    else {
        dec2bin(n/2);
        if(n%2==0)
            printf("0");
        else
            printf("1");
    }
}


/*
int q[N];//²�ƹL�᪺�G���}�C�A�u�n�O���Ģܦ檺�ĴX�ӬO�ӦZ
int nsol=0;
void show(void);
int valid(int,int);
void solve(int);

void show()
{
    int i, j;//�e�X���٬O�n�����h�j��
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(q[i]==j) printf("Q");//����@�ӬӦZ
            else printf("+");
        }
        printf("\n");
    }
    printf("\n");

}

void solve(int r)
{
    int j;

    if(r==N)
    {
        nsol++;
        show();
    }
    else{
        for(j=0;j<N;j++)
        {
            if(valid(r,j))
            {
                q[r] = j;//��j��W�h�A���ΦA���_��
                solve(r+1);
            }
        }
    }
}
int valid(int r, int c)
{
    int i;
    for(i=0;i<r;i++)
    {
        if(q[i]==c) return 0;//�ˬdc���S���Ĩ�
        if(i-r == c-q[i]) return 0;//�ˬd45�ר�
        if(r-i == c-q[i]) return 0;
    }
    return 1;
}
*/

//3x3�ѽL�A1�O�Ѥl0�O�Ů�
/*void show(void);
int valid(int,int);
void solve(int);
void show(void)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(board[i][j]) printf("O");
            else printf("X");
        }
        printf("\n");
    }
}

int valid(int r,int c)//����P�_�O�_�X�k
{
    int i;
    for(i=0;i<r;i++)
    {
        if(board[i][c]) return 0;//�ˬd�O�_��1
    }
    return 1;//true
    //�]�i�H�]true or false�Ӭ����nreturn0�٬O1�A�p�G�O0�N�nbreak
}
void solve(int r)
{
    int i;

    if(r==N){
        show();
    }

    for(i=0; i<N; i++)
    {
        if(valid(r,i)){
            board[r][i] = 1;//�i�\�N�\
            solve(r+1);
            board[r][i] = 0;//�n�O�o�U�@���Ϋe�����n
        }
    }
}

int main(void)
{
    solve(0);
    printf("%d\n",nsol);
    return 0;
}
*/
