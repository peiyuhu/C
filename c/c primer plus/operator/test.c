// 错误使用递增运算符,不要太自作聪明
#include<stdio.h>
int main(void)
{
    int num = 3;
    int y; 

    while (num < 2000)        //  想要完成返回num的平方，但结果选择先递增num给num赋新值，使前一个和第一个num值为6，而最后一个num为旧值5
    {

        y = num++ + num++;
        printf("%d %d\n", num, y);
    }

   return 0; 
}