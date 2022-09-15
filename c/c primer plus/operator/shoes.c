// 更改鞋码尺寸
#include<stdio.h>
#define ADJUST 7.31  //字符常量
int main(void)
{

    const double SCALE = 0.333;   // const常量
    double shoe, foot;

    printf("鞋子大小尺寸（男人）    脚的大小\n");
    shoe = 3.0;
    while (++shoe < 18.5)
    {

        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
    }
    
    printf("鞋子大小合适。\n");

    return 0;
}