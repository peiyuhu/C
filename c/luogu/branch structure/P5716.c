#include <stdio.h>
int main(void)
{
    /*      用数组方法一
    int y, m;
    _Bool leapYear;
    int const M[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //首数字放0以便于后续月数与索引相等
    scanf("%d %d", &y, &m);
    leapYear = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    if (leapYear)
    {
        if (m == 2) //闰年二月份
        {
            printf("%d", 29);
        }
        else
        {
            printf("%d", M[m]);
        }
    }
    else
    {
        printf("%d", M[m]);
    }

    return 0;
    */


    //用switch方法二
    int y, m;
    _Bool leapYear;
    scanf("%d %d", &y, &m);
    leapYear = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d", 31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d", 30);
        break;
    case 2:
        if (leapYear)
        {
            printf("%d", 29);
        }
        else
        {
            printf("%d", 28);
        }
        break;
    default:
        break;
    }

    return 0;
}