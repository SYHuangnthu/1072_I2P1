#include<stdio.h>


//��getchar����scanf
int main(void)
{
    char ch;
    int x = 0;
    char num[20];
    int i;

    while( (ch=getchar()) != EOF && isdigit(ch))
    {
        //isdigit(ch)�P�_�O���O�Ʀr
        //-'0'�g���ĪG�A��n�i�H�]�ȡH�H�H
        //'0'�N�O48!!!
        //x = ch-'0'+x*10; �i�H��char�ܦ��Q�i�쪺��
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
        x = x/10;//�L����˥h��
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

//�]�����ζǭȦ^�h�A�ҥH�]��void
void check(int cond)
{
    if(cond == 1)//���󦨥�
        printf("True\n");
    else
        printf("False\n");
}

//�Q�nreturn�Ȧ^�h���ܡA�N�n�]���ӫ��O
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
