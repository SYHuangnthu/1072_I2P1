#include<stdio.h>
#include<string.h>


void compress(char in[], char out[], int count[], char prev, int i, int j)
{
    if(in[i] != '\0'){
    if(in[i] == prev)
    {
        count[j]++;
        compress(in, out, count, prev, i+1, j);
    }
    else
    {
        count[j+1] = 1;
        out[j] = prev;
        prev= in[i];
        compress(in, out, count, prev, i+1, j+1);
    }
    }
    else
    out[j]= prev;
}
int palindrome(char s[], int l, int r)
{
    if(l>=r) return 1;
    else
    {
        if(s[l] == s[r])
            return palindrome(s, l+1, r+1);
        else
            return 0;
    }
}
void reversal(char s[], int l, int r)
{
//    s[i] = '*';
    char temp;

    if(l<r)
    {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        reversal(s, l+1, r-1);
    }
}
int main(void)
{


//compress
    char input[100];
    char output[100]={0};
    int count[100] = {0};
    int i,j;

    scanf("%s", input);
    compress(input, output, count, input[0], 0, 0 );

    for(i=0; i<strlen(output); i++)
    {
    printf("%d %c\n", count[i], output[i]);
    }
    for(i=0; i<strlen(output); i++)
    {
        for(j=0; j<count[i]; j++)
        {
            printf("%c", output[i]);
        }
    }
    printf("\n");

//    char str[100];
//    scanf("%s", str);
//    reversal(str, 4, 5);
//    if (palindrome(str)==1)
//        printf("Yes\n");
//        else
//        printf("No\n");



    return 0;
}
