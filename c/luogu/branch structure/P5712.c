#include <stdio.h>
int main(void)
{
    int x;

    scanf("%d", &x);
    if (x < 2)
    {
        printf("Today, I ate %d apple.", x);
    }
    else
    {
        printf("Today, I ate %d apples.", x);
    }

    return 0;
}