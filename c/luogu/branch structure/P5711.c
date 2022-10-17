#include<stdio.h>
int main(void)
{
    int n, x = 0;

    scanf("%d", &n);
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))x = 1;

    printf("%d", x);

    return 0;

}