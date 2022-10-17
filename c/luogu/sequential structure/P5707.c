#include<stdio.h>
int main(void)
{
    int s,v;        
    int min, tomin;
    int h,m;

    scanf("%d %d", &s, &v);

    if(s % v == 0)           //判断s，v余数是否加1
    {
        min = (s / v) + 10;
    }
    else{
        min = (s / v) + 11;
    }

    if((480 - min) < 0)     //需要提前一天上学
    {
        tomin = 1440 + (480 - min);
        h = tomin / 60;     // 小时
        m = tomin % 60;     // 分钟
    }
    else{                   // 当天上学
        h = (480 - min) / 60;
        m = (480 - min) % 60;
    }

    if(h >= 10)     //显示格式HH:MM(h与m得考虑往前进一)
    {
        if(m >= 10)
        {
            printf("%d:%d", h, m);
        }
        else{
            printf("%d:0%d", h, m);
        }
    }
    else{
        if(m >= 10)
        {
            printf("0%d:%d", h, m);
        }
        else{
            printf("0%d:0%d", h, m);
        }
    }

    return 0;
}