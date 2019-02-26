#include <stdio.h>


int main(void)
{
    int x;
//    char name[8] = "Eddie";//字串最多只能放九ㄍ字喔，放到第十個以上會發生不好ㄉ事情（？
    //char 可以放字元
    //少掉的那一格要放結尾符號\0，電腦才知道結尾以前放的是什麼東西
    char names[5][10]= {"Steve", "Jimmy", "Frank", "Joe", "Brian"};
    //[5]:五ㄍ字串（第五個也可以放東西，不是結尾符號）
/*
    scanf("%s", names[0]);//編號一定從0開始喔
    scanf("%s", names[1]);//挖殼以不用加&欸!!!
    scanf("%s", names[2]);
    scanf("%s", names[3]);
    scanf("%s", names[4]);
*/
    printf("Choose a name:\n");
    printf("0: %s\n", names[0]);//%s可以把字串顯示在螢幕上喔
    printf("1: %s\n", names[1]);
    printf("2: %s\n", names[2]);
    printf("3: %s\n", names[3]);
    printf("4: %s\n", names[4]);

    scanf("%d", &x);
    printf("%s is a good name!\n", names[x]);
    return 0;
}
