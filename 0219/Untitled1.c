#include <stdio.h>


int main(void)
{
    int x;
    int y;
    x = 5;
    y = 10;
    y = (double)y/x + 0.5;//�`�Ny �Oint�A�p�G�p�ƴNGG
    //���䪺y�٬Oint�A�k�䪺y��]��double�N�i�H�u�[0.5�N�|�ˤ��J�o
    printf("%10d", y);

    return 0;
}
