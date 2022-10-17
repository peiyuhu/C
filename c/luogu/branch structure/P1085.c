#include <stdio.h>
int main(void)
{
    int sTime, eTime, sum, max, day;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d", &sTime, &eTime);
        sum = sTime + eTime;
        if ((sum > max) && sum > 8)
        {
            max = sum;
            day = i + 1;
        }
    }

    printf("%d", day);

    return 0;
}