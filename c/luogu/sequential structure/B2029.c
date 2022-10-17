#include<stdio.h>
#define PI 3.14

int main(void)
{
    int h,r;

    scanf("%d %d", &h, &r);
    printf("%.0f", (20000 / (h * r * r * PI) + 1));

    return 0;
}