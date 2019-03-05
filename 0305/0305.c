#include <stdio.h>
/*
int main(void)
{
    int width, precision;
    double rate = 123.45;
    printf("Enter a width and a precision: ");
    scanf("%d%d", &width, &precision);
    printf("rate: '%*.*f'\n", width, precision, rate);
    // *殼以動態控制格式欸豪狂喔
    return 0 ;
}
*/
/*
Using the %*.s format in printf()
#include <string.h>
#define BORDER "############################################"
int main(void)
{
    char word[26];
    scanf("%25s", word);
    printf("%.*s\n", strlen(word)+2, BORDER);
    printf("#%s#\n", word);
    printf("%.*s\n", strlen(word)+2, BORDER);

    return 0 ;
}


*/
/*
int main(void)
{
    printf("%s\n", __FILE__);
    printf("%s\n", __LINE__);
    printf("%s\n", __func__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    return 0;
}
*/
/*
int main(void)
{
    int x, n;
    int i, sum;
    int a[50];

    printf("How many numbers? (n<50) ");

    scanf("%d", &n);
    i = 0;
    while (i<n) {

        printf("Input a[%d]: ", i);
        scanf("%d", &x);

        printf("The number is %d\n", x);

        a[i] = x;

        i = i + 1;
    }
    i = 0;

    sum = 0;

    while (i<n) {

        printf("%d + ", a[i]);
        sum = sum + a[i];
        i++;
    }
    printf("\b\b= %d\n", sum);
    return 0;
}
*/


int main(void)
{
    int i, j;
    i = 1;
    j = 1;

    while (i<=9)
    {

        printf("%d : ", i);
        j = 1;
        while (j<=9)
        {
            printf("%2d ", i*j);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}
