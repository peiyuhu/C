#include <stdio.h>
int main(void)
{
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);

    if (t == 0) //如果t=0的情况
    {
        printf("%d", 0);
        return 0;           //第一次考虑没使用return 0，导致错误（并且将特殊情况放到末尾出错）
    }

    if (s % t == 0)
    {
        if (m - (s / t) > 0)
            printf("%d", m - (s / t));
        else
        {
           printf("%d", 0);
        }
    }
    else
    {
        if (m - (s / t + 1) > 0)
            printf("%d", m - (s / t + 1));
        else
        {
            printf("%d", 0);
        }


    }

    return 0;
}
