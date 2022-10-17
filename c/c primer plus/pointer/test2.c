// 两级解用时把非const指针赋给const指针会出问题
#include<stdio.h>
int main(void)
{
    const int **pp2;
    int *p1;
    const int n = 13;
    pp2 = &p1;      // 导致const限定失效
    *pp2 = &n;      // p1指向了*pp2，从而改变了p1和*p1值（*pp2和**pp2已经修改）
    *p1 = 10;       // n的值将被改变（**pp2与*p1和n值将相同）

    return 0;
}