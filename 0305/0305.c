#include<stdio.h>

int main(void)
{
/*(1)
//    char name[10];//4�ּ֣x�}�C�A�i�H����쾹��
    char ch;//char��-128-127�x�K�줸
//    int x;//int��32�줸
    ch = 65;//��޸��G�r���A�S����޸��N�O�ܼ�
    printf("%c\n", ch);
    ch = 'A';
    printf("%d\n", ch);
*/
/*(2)
    char name[10];

    scanf("%s", name);

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",
            name[0], name[1], name[2], name[3],
            name[4], name[5] );//�ߥH�L�X�r���x�Ʀr�z!
    printf("%s \n", name);
*/
/*(3)

    char name[10] = {'A', 'B', '\0', 'C','D'};
    //��{�r���}�C�o�S��\0????
    printf("%s\n", name[0], name[1], name[2], name[3],
            name[4], name[5]);
    //%s�S�ݨ�\0�u�n�@��Ū�U�h(GG
*/
/*(4)
    char name[10];//�j�p = 10
    scanf("%9s", name);
    //%9s�i�H����name ��n��E�Ӧr��
    printf("%s\n", name);
*/
/*
    double x;//64�줸
    float z;//32�줸

    scanf("%f", &z);
    scanf("%lf", &x);//double �n�[lf��,�~�i�H�ΰ��j���Ŷ��Ӷ�

    printf("%f\n", z);
    printf("%2.5f\n", x);
    //�~�M�i�H���κ�l�z!!!�]���O�L�X�Ӫ���ܪk
    //printf �x�|�۰ʤɯŦ���64�줸�xlf�A�δ�
    //��榡�I�_��!!!
*/
//���@�Usizeof()��stringlenth
    double x;
    float z;
    printf("%lu %lu", sizeof(x), sizeof(z));
    //%lu = double �x unsigned�Asize�u�|�O�⭿�j�x����


    return 0;
}
