#include <stdio.h>


int main(void)
{
    int x;
//    char name[8] = "Eddie";//�r��̦h�u���E�|�r��A���ĤQ�ӥH�W�|�o�ͤ��n�x�Ʊ��]�H
    //char �i�H��r��
    //�ֱ������@��n�񵲧��Ÿ�\0�A�q���~���D�����H�e�񪺬O����F��
    char names[5][10]= {"Steve", "Jimmy", "Frank", "Joe", "Brian"};
    //[5]:���|�r��]�Ĥ��Ӥ]�i�H��F��A���O�����Ÿ��^
/*
    scanf("%s", names[0]);//�s���@�w�q0�}�l��
    scanf("%s", names[1]);//���ߥH���Υ[&��!!!
    scanf("%s", names[2]);
    scanf("%s", names[3]);
    scanf("%s", names[4]);
*/
    printf("Choose a name:\n");
    printf("0: %s\n", names[0]);//%s�i�H��r����ܦb�ù��W��
    printf("1: %s\n", names[1]);
    printf("2: %s\n", names[2]);
    printf("3: %s\n", names[3]);
    printf("4: %s\n", names[4]);

    scanf("%d", &x);
    printf("%s is a good name!\n", names[x]);
    return 0;
}
