#include<stdio.h>
int main(void)
{
    int a,b,c,d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(d >= b)
    {
        printf("%d %d", c - a, d - b);
    }
    else
    {
        d += 60;
        c--;
        printf("%d %d", c -a, d - b);
    }

    return 0;
}