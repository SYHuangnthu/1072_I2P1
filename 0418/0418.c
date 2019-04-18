
/*
//week 09 prefix to infix
* + 2 3 + 4 + - 5 6 - 7 8
>*(2+3) + 4 + - 5 6 - 7 8
>(2+3)*(4 + - 5 6 - 7 8)
>(2+3)*(4+((5-6)+(7-8)))
>((2+3)*(4+((5-6)+(7-8))))
>>>>>結果程式會幫忙算(
*/
#include <stdio.h>
#include <ctype.h>

int calculate(void);

int main(void)
{
    printf("=%d\n", calculate());
    return 0;
}

int calculate(void)
{
    int c;
    int ans;
    int op1, op2;

    c = getchar();
    if (isspace(c)) {
        ans = calculate();
    } else if (c=='+') {
        printf("(");
        op1 = calculate();
        printf("+");
        op2 = calculate();
        printf(")");
        ans = op1 + op2;
    } else if (c=='-') {
        printf("(");
        op1 = calculate();
        printf("-");
        op2 = calculate();
        printf(")");
        ans = op1 - op2;
    } else if (c=='*') {
        printf("(");
        op1 = calculate();
        printf("*");
        op2 = calculate();
        printf(")");
        ans = op1 * op2;
    } else if (isdigit(c)) {
        ungetc(c, stdin);
        scanf("%d", &ans);
        printf("%d", ans);
    }

    return ans;

}
/*
原本ㄉ陣列{?,?,?,'0'}

當x=0
{'0',?,?,'\0' }
遞迴呼叫x=1,
{'0','0',?,'\0'}
x=2
{'0','0','0','\0'}
x=3>>>碰壁，顯現字串000
然後不斷鬼打牆((
就可以排出很多1跟0ㄉ排列
#include<stdio.h>

void show_bits(int);
char bits[64];
int N;
int main(void)
{
    printf("Please enter the numver of bits: ");
    scanf("%d", &N);
    bits[N]= '\0';
    show_bits(0);

    return 0;
}
void show_bits(int x)
{
    if (x==N)
        printf("%s\n", bits);
    else
    {
        bits[x] = '0';
        show_bits(x+1);
        bits[x] = '1';
        show_bits(x+1);
    }
}
*/



/*
//Task B: Make change找零錢排列組合

#include<stdio.h>
#define N 3
int value[N]={1,5,10};
int num[N] = {0};

void change(int n, int amount)
{
    if(amount==0)
    {
        for (int i=0;i<N;i++)
            printf("%d", num[i]);
        printf("\n");
    }
    else if (amount>0 && n<N)
    {
        change(n+1,amount);
        num[n]++;
        change(n,amount-value[n]);
        num[n]--;
    }
    else{

    }
}

int main(void)
{

    int amount;
    scanf("%d", &amount);
    change(N,amount);
    return 0;
}
*/
/*
#include <stdio.h>
#define MAXNV 5
int values[MAXNV] = {1,5,10};//銅板面值
int numbers[MAXNV] = {0};//

void show(int nv);
void change(int amount, int smallest, int nv);

int main(void)
{
	int nv, i;
	int money;

	scanf("%d", &nv);
	if (nv>MAXNV || nv<1) return 0;

	for (i=0; i<nv; i++) {
		scanf("%d", &values[i]);
	}

	scanf("%d", &money);
	change(money, 0, nv);

	return 0;
}

void show(int nv)
{
	int i;
	printf("(%d", numbers[0]);
	for (i=1; i<nv; i++) {
		printf(",%d", numbers[i]);
	}
	printf(")\n");
}

void change(int amount, int smallest, int nv)
//找銅板的錢，找銅板的總數，
{
	if (smallest<nv) {
		if (amount == 0) {
			show(nv);
		} else if (amount > 0) {
			// your code here

		}
	}
}


*/
