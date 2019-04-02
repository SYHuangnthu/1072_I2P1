#include <stdio.h>
//遞迴呼叫
//最大公因數
int gcd(int a, int b);
int main(void)
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("gcd(%d, %d) = %d\n", x, y, gcd(x, y));
     return 0;
}
//輾轉相除法
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b, a%b);
}

/*
//honoi!!!!河內塔喔喔
//把三個碟子從一搬到三
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
double power(double n, int p);//記得加分號(((

int main(void)
{
    printf("%f\n", power(2.3,5));
    return 0;

}

宣告 double power(double n, int p); ，然後使用下面的方式來做遞迴:
(0) 先檢查 p 是否等於 0，是的話就傳回答案 1; 若 p 不等於 0 則先算出 ans = power(n, p/2);
(1) 如果 p 是偶數，則 return ans*ans;
(2) 如果 p 是奇數，則 return n*ans*ans;
這裡有使用到整數除法無條件捨去的特性。

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
        f(x-1);//呼叫f把動作隔成兩部分QQ
        printf("after f(%d-1)\n", x);
    }
}

//想要變成f(5) -> before f(5-1), before f(4-1), f(3),  f(4), after f(5-1)

int main(void)
{
    f(5);
    return 0;
}
*/

/*
int f(int x)
{
    if (x>10) return 0;//停止條件
    return f(2*x)+1;//又呼叫ㄌ一次自己
}
//f(3)= f(6)+1 = f(12) +1 +1 =0+1+1
int main(void)
{
    printf("%d\n", f(3));
    return 0;
}

*/
