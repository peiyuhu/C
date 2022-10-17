#include<stdio.h>
int main(void)
{
    float t;
    int n;

    scanf("%f",&t);
    scanf("%d",&n);
    printf("%.3f\n", (t / n));
    printf("%d",2*n);

    return 0;
}