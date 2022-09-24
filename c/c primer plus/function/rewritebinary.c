// 重写二进制形式打印整数
#include <stdio.h>
void tobin(unsigned long n);
int main(void)
{
    unsigned long num;

    printf("请输入一个整数（或者按q退出）：\n");

    if((num = getchar() ) != '\n')
    {
        
          while (scanf("%lu", &num) == 1)
        {

            printf("以下是对应的二级制形式：\n");
            tobin(num);
            printf("\n");
            printf("继续输入下一个整数（或者按q退出）:\n");

        }
    }
    else
    {
        printf("输入格式错误！\n");
    }
    return 0;
}

/* function */
void tobin(unsigned long n)
{
    int x; // 二进制0或1
    x = n % 2;
    if (n >= 2)
    {
        tobin(n / 2);
    }
    putchar(x == 0 ? '0' : '1');

    return;
}