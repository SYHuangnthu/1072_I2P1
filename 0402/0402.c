#include <stdio.h>
//���j�I�s
//�̤j���]��
int gcd(int a, int b);
int main(void)
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("gcd(%d, %d) = %d\n", x, y, gcd(x, y));
     return 0;
}
//����۰��k
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b, a%b);
}

/*
//honoi!!!!�e������
//��T�ӺФl�q�@�h��T
void honoi(int n, int from, int to, int buf)
{
    if(n>0){
        honoi(n-1, from, buf, to);
        printf("%d -> %d\n", from, to);
        honoi(n-1, buf, to, from);
    }


}
int main(void)
{
    honoi(3, 1, 3, 2);
    return 0;
}
*/
/*
int paren(int n)
{
//((((1+2)*3+4)*5+6)*7+8)*9+10=4555
    int ans;

    if(n>1){
        printf("(");
        ans = paren(n-1);
        if (n%2){
          printf("*");
          ans = ans*n;
        }
        else{
            printf("+");
            ans += n;
        }
        printf("%d", n);
        if (n%2==0) printf(")");
    }
    else{
        printf("1");
        ans = 1;
    }
    return ans;
}

int main (void)
{
    printf(" = %d", paren(9));
    return 0;
}

/*
double power(double n, int p);//�O�o�[����(((

int main(void)
{
    printf("%f\n", power(2.3,5));
    return 0;

}

�ŧi double power(double n, int p); �A�M��ϥΤU�����覡�Ӱ����j:
(0) ���ˬd p �O�_���� 0�A�O���ܴN�Ǧ^���� 1; �Y p ������ 0 �h����X ans = power(n, p/2);
(1) �p�G p �O���ơA�h return ans*ans;
(2) �p�G p �O�_�ơA�h return n*ans*ans;
�o�̦��ϥΨ��ư��k�L����˥h���S�ʡC

double power(double n, int p)//p>=0
{
    double ans;
    if(p ==0)
        ans =1;
    else
        ans = power(n, p/2);
    if(p%2==0) return ans*ans;
    else return n*ans*ans;
//    if(p>0)
//        power(n,p-1)*n;
//    else
//        return 1;
}
*/

/*
void f(int x)
{
    if(x>0)
    {
        printf("before f(%d-1)\n", x);
        f(x-1);//�I�sf��ʧ@�j���ⳡ��QQ
        printf("after f(%d-1)\n", x);
    }
}

//�Q�n�ܦ�f(5) -> before f(5-1), before f(4-1), f(3),  f(4), after f(5-1)

int main(void)
{
    f(5);
    return 0;
}
*/

/*
int f(int x)
{
    if (x>10) return 0;//�������
    return f(2*x)+1;//�S�I�s�{�@���ۤv
}
//f(3)= f(6)+1 = f(12) +1 +1 =0+1+1
int main(void)
{
    printf("%d\n", f(3));
    return 0;
}

*/
