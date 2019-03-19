#include<stdio.h>


//用getchar模擬scanf
int main(void)
{
    char ch;
    int x = 0;
    char num[20];
    int i;

    while( (ch=getchar()) != EOF && isdigit(ch))
    {
        //isdigit(ch)判斷是不是數字
        //-'0'迷之效果，剛好可以設值？？？
        //'0'就是48!!!
        //x = ch-'0'+x*10; 可以讓char變成十進位的值
//        putchar(ch);
//        printf("\n%d \n", ch);
//        printf("%d\n", x);
        x = x*10 + ch - '0';
    }

    x = 2*x + 1;
    i = 0;
    while(x>0)
    {
        num[i] = x%10 +'0';
        i++;
        x = x/10;//無條件捨去喔
    }
    i--;
    while (i>=0)
    {
        putchar('_');
        putchar(num[i]);
        i--;
    }
	return 0;
}




/*

//因為不用傳值回去，所以設成void
void check(int cond)
{
    if(cond == 1)//條件成立
        printf("True\n");
    else
        printf("False\n");
}

//想要return值回去的話，就要設成該型別
char check1 (int cond)
{
    char a;
    if(cond == 1)
    {
        printf("True\n");
        a = 'T';
    }
    else
    {
        printf("False\n");
        a = 'F';
    }
    return a;
}

int main(void)
{
    int x = 5;
    int y = 3;


   check(x > 2 && y == 3);
   check( !(x < 2 || y == 3) );
   check(x != 0 && y);
   check(x == 0 || !y);
   check(x != y && (20/x) < y);
   check( !(y>5 || y<2) && !(x%5) );
   check(!x && x);

   return 0;
}
*/
