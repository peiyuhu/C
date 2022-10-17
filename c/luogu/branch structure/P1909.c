#include <stdio.h>
int main(void)
{
    int n, pernum, price, min, sum;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &pernum, &price);
        if (n % pernum == 0)
        {
            sum = price * (n / pernum);
        }
        else
        {
            sum = price * (n / pernum + 1);
        }
        
        if (i == 0 || sum < min)
        {
            min = sum;
        } 
    }

    printf("%d", min);

    return 0;
}