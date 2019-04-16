#include<stdio.h>
#define N 6
char board[N][N];//城堡試試看二位陣列儲存

void dec2bin(int);//把十進位改二進位
int main(void)
{
    int n;
    scanf("%d", &n);
    dec2bin(n);
    return 0;
}
void dec2bin(int n)//用遞迴ㄉ話就可以先顯示最高位喔
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
int q[N];//簡化過後的二維陣列，只要記錄第Ｎ行的第幾個是皇后
int nsol=0;
void show(void);
int valid(int,int);
void solve(int);

void show()
{
    int i, j;//畫出來還是要用雙層迴圈
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(q[i]==j) printf("Q");//有放一個皇后
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
                q[r] = j;//把j放上去，不用再拿起來
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
        if(q[i]==c) return 0;//檢查c有沒有衝到
        if(i-r == c-q[i]) return 0;//檢查45度角
        if(r-i == c-q[i]) return 0;
    }
    return 1;
}
*/

//3x3棋盤，1是棋子0是空格
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

int valid(int r,int c)//條件判斷是否合法
{
    int i;
    for(i=0;i<r;i++)
    {
        if(board[i][c]) return 0;//檢查是否為1
    }
    return 1;//true
    //也可以設true or false來紀錄要return0還是1，如果是0就要break
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
            board[r][i] = 1;//可擺就擺
            solve(r+1);
            board[r][i] = 0;//要記得下一次用前先收好
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
