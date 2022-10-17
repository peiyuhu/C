#include <stdio.h>
int main(void)
{
    int n; //表示需要配置的题目量。
    int a, b;

    scanf("%d", &n);
    a = 5 * n;
    b = 3 * n + 11;

    if (a < b)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }

    return 0;
}