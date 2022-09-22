// 计算定期存款本利之和
#include<stdio.h>
int main(void)
{
    double rate, capital, deposit;     //  年利率、本金、本利之和
    int n;                // 存款期限

    rate = 0.0225;

    printf("请输入你的本金：");
    scanf("%lf", &capital);
    printf("请输入存款期限：");
    scanf("%d", &n);
    deposit = capital * pow(rate + 1, n);

    // 计算n年后本利之和
    printf("你的定期存款本利之和是%f\n", deposit);



}