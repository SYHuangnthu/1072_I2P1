#include<stdio.h>


#define MAP_SIZE 12//設定地圖為12的陣列
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
int valid(int, int);//撞到牆
void pick_jewels(int, int);//撿到錢
void upgrade(void);

int person[4] = {'>','V','<','^'};
int person_dir;
int person_row, person_col;
int speed = 1;

int main(void)
{
    int ch;


    blocks_read();

    jewels_read();

#ifndef ONLINE_JUDGE
    freopen("actions.txt", "r", stdin);
#endif

    while ((ch=getchar()) != EOF) {
        map_reset();
        blocks_put_on_map();
        jewels_put_on_map();

        if (ch=='R') {

            car_rotate90();
        }

        else if (ch=='F') {

            car_move();
        }

        car_put_on_map();//把車放上去
        map_show();

#ifndef ONLINE_JUDGE
//如果沒有定義online judge就做這一行
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
    freopen("blocks.txt", "r", stdin);//"r"讀取檔案,取代stdin(鍵盤)
#endif
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d%d", &row, &col);
        blocks[row][col] = 1;//標示為1表示有障礙物
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
        jewels[row][col]++;
    }
}
void blocks_put_on_map(void)
{
    int i, j;

    for (i=0; i<MAP_SIZE; i++) {

        for (j=0; j<MAP_SIZE; j++) {

            if (blocks[i][j])//如果裡面有非零的值

                map[i][j] = '#';//畫井字號
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
void map_reset(void)//放障礙物跟寶物前，先清空放基本東西
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
    //餘數1234==上左下右
    if(car_direction%2){//朝上朝下
        tmp = car[0][0];
        car[0][0] = car[2][2];
        car[2][2] = tmp;
    }
    else{//朝左朝右
        tmp = car[0][2];
        car[0][2] = car[2][0];
        car[2][0] = tmp;
    }
    car_direction = (car_direction+1)%4;
}

int valid(int r, int c){
    int i,j;
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        if (map[r+i][c+j]=='#' ||map[r+i][c+j] == 'H') return 0;
        }
    }
    return 1;
}
void pick_jewels(int r, int c){
    int i,j;
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
            if (jewels[r+i][c+j]){
                car_earnings++;
                jewels[r+i][c+j]--;
            }
        }
    }
}


void upgrade(void){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        if(car[i][j]=='@') car[i][j]='*';
        if(car[i][j]=='0') car[i][j]='0';
        }
    }
    //speed = 2;
}

void car_move(void)//移動車的左上角座標
{
    /* your code */
    int car_row_try = car_row;
    int car_col_try = car_col;
    int dr[4] = {0, 1, 0, -1};//←聰明快速法!!!
    int dc[4] = {1, 0, -1, 0};
    car_row_try += dr[car_direction];
    car_col_try += dc[car_direction];//
    if(valid(car_row_try, car_col_try)){
        car_row = car_row_try;
        car_col = car_col_try;
    }
    pick_jewels(car_row, car_col);
    if(car_earnings>=5){
        upgrade();
    }

//↓土法煉鋼法
/*    if(car_direction ==0)
        car_col_try++;
    else if(car_direction == 1)
        car_row_try++;
    else if(car_direction == 2)
        car_col_try--;
    else
        car_row_try--;*/

}
