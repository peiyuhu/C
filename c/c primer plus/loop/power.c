// ??????????????
#include<stdio.h>
double power(double n, int p);
int main(void)
{
    double x , xpow;
    int exp;

    printf("??????????\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("????q??\n");
    }
    printf("??§Ý??\n");

    return 0;
    
}





double power(double n, int p)
{
    double pow = 1;
    int i;
    
    for(i = 1; i <=p; i++)
    {
         pow *=n;

    }
    return pow;
}