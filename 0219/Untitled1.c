#include <stdio.h>
void func1();
void func2();
int main(void)
{
    int x,y;
//    printf("Hello,\t world\n"); /*\ ���� \t tab \"�ּ֣x���޸� \\ ��ܤϱ׽u�o*/
//    printf("1234+5678\n");
//    printf("%d\n", 1234+5678);/*%d �Q�i���*/
//    printf("%10d\n", 1234+5678);/*��Ƥ����|�ۤv�ɤW�Ů��*/
//    printf("%07d\n", 1234+5678);/*07 �Ŧ��0*/
    scanf("%d %d", &x, &y); //&���o��m
    printf("%d\n", x*(y+3));
    func1();

    return 0;
}
void func1()
{
    printf("1\n");
    func2();

}
void func2()
{
    printf("2\n");

}
