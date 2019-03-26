#include<stdio.h>


#define MAP_SIZE 12
#define CAR_SIZE 3
/* #define ONLINE_JUDGE */

int map[MAP_SIZE][MAP_SIZE];
void map_reset(void);

void map_show(void);

int blocks[MAP_SIZE][MAP_SIZE];
void blocks_read(void);
void blocks_put_on_map(void);

int jewels[MAP_SIZE][MAP_SIZE];
void jewels_read(void);
void jewels_put_on_map(void);

int car[CAR_SIZE][CAR_SIZE] = {{'O', 'O', '@'}, {'O', 'O', 'O'}, {'O', 'O', '@'}};
int car_row = 3, car_col = 4;
int car_direction;
int car_earnings;
void car_rotate90(void);
void car_put_on_map(void);
void car_move(void);

int main(void)
{
    int ch;

    blocks_read();

    jewels_read();

#ifndef ONLINE_JUDGE
    freopen("actions.txt", "r", stdin);
#endif

    while ((ch=getchar()) != EOF) {

        if (ch=='R') {

            car_rotate90();
        }

        if (ch=='F') {

            car_move();
        }

        map_reset();

        blocks_put_on_map();

        jewels_put_on_map();

        car_put_on_map();

#ifndef ONLINE_JUDGE
//如果沒有定義online judge就坐這一行
        map_show();
#endif
    }


    printf("Earnings: %d\n", car_earnings);

    printf("Position: row=%d, col=%d\n", car_row, car_col);

    char dirs[] = "RDLU";

    printf("Direction: %c\n", dirs[car_direction]);


    return 0;
}
void blocks_read(void)
{
    int n, i;
    int row, col;
#ifndef ONLINE_JUDGE
    freopen("blocks.txt", "r", stdin);
#endif
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d%d", &row, &col);
        blocks[row][col] = 1;
    }
}
void jewels_read(void)
{
    int n, i;
    int row, col;
#ifndef ONLINE_JUDGE
    freopen("jewels.txt", "r", stdin);
#endif
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d%d", &row, &col);
        jewels[row][col] = 1;
    }
}
void blocks_put_on_map(void)
{
    int i, j;

    for (i=0; i<MAP_SIZE; i++) {

        for (j=0; j<MAP_SIZE; j++) {

            if (blocks[i][j])

                map[i][j] = '#';
        }
    }
}
void jewels_put_on_map()
{
    int i, j;

    for (i=0; i<MAP_SIZE; i++) {

        for (j=0; j<MAP_SIZE; j++) {

            if (jewels[i][j])

                map[i][j] = '$';
        }
    }
}
void map_reset(void)
{
    int i, j;

    for (i=0; i<MAP_SIZE; i++) {

        for (j=0; j<MAP_SIZE; j++) {

            map[i][j] = '.';
        }
    }
    for (i=0; i<MAP_SIZE; i++) {

        map[i][0] = 'H';

        map[i][MAP_SIZE-1] = 'H';
    }
    for (j=0; j<MAP_SIZE; j++) {

        map[0][j] = 'H';

        map[MAP_SIZE-1][j] = 'H';
    }
}

void map_show(void)
{
    int i, j;

    for (i=0; i<MAP_SIZE; i++) {

        for (j=0; j<MAP_SIZE; j++) {

            printf("%c", map[i][j]);

        }
        printf("\n");
    }

}
void car_put_on_map(void)
{
    int i, j;
    for (i=0; i<CAR_SIZE; i++) {

        for (j=0; j<CAR_SIZE; j++) {

            map[i+car_row][j+car_col] = car[i][j];
        }
    }
}

void car_rotate90(void)
{
    int tmp;
    /* your code */
    //移對小老鼠
    if(car_direction%2){
        tmp = car[0][0];
        car[0][0] = car[2][2];
        car[2][2] = tmp;
    }
    else{
        tmp = car[0][2];
        car[0][2] = car[2][0];
        car[2][0] = tmp;
    }
    car_direction = (car_direction+1)%4;
}

void car_move(void)
{
    /* your code */

}

/*

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
