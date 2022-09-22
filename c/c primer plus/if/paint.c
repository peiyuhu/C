// 使用条件运算符
#include<stdio.h>
#define COVERAGE 350        //每罐油漆可刷面积（单位：平方英尺）
int main(void)
{
    int sq_feet;
    int cans;

    printf("输入多少面积需要粉刷.\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("你需要%d%s粉刷。\n", cans, cans == 1 ? "can" : "cans");
        printf("输入下一个数字或者按q推出。\n");
    }

   return 0; 
}