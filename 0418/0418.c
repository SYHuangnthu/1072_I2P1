
/*
//week 09 prefix to infix
* + 2 3 + 4 + - 5 6 - 7 8
>*(2+3) + 4 + - 5 6 - 7 8
>(2+3)*(4 + - 5 6 - 7 8)
>(2+3)*(4+((5-6)+(7-8)))
>((2+3)*(4+((5-6)+(7-8))))
>>>>>���G�{���|������(
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
�쥻�x�}�C{?,?,?,'0'}

��x=0
{'0',?,?,'\0' }
���j�I�sx=1,
{'0','0',?,'\0'}
x=2
{'0','0','0','\0'}
x=3>>>�I���A��{�r��000
�M�ᤣ�_������((
�N�i�H�ƥX�ܦh1��0�x�ƦC
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
//Task B: Make change��s���ƦC�զX

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
int values[MAXNV] = {1,5,10};//�ɪO����
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
//��ɪO�����A��ɪO���`�ơA
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
