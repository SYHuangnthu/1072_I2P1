#include <stdio.h>

int main(void)
{
    int x;
    printf("Hello,\t world\n"); /*\ ���� \t tab \"�ּ֣x���޸� \\ ��ܤϱ׽u�o*/
    printf("1234+5678\n");
    printf("%d\n", 1234+5678);/*%d �Q�i���*/
    printf("%10d\n", 1234+5678);/*��Ƥ����|�ۤv�ɤW�Ů��*/
    printf("%07d\n", 1234+5678);/*07 �Ŧ��0*/
    scanf("%d", &x);
    printf("%d", x+1);

    return 0;
}
