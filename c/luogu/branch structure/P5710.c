#include<stdio.h>
int main(void)
{
    /* 做法一
    int x;
    _Bool a, b;
    scanf("%d",&x);

    a = (x % 2 == 0);
    b = (x > 4 && x <= 12);

    if(a == 1 && b == 1)
    {printf("%d", 1);}    
    else{printf("%d", 0);}

    if(a == 1 || b == 1)
    {printf(" %d", 1);}
    else{printf(" %d", 0);}

    if((a == 1 && b == 0) || (a == 0 && b == 1))
    {printf(" %d", 1);}
    else{printf(" %d", 0);}

    if(a == 0 && b == 0)
    {printf(" %d",1);}
    else{printf(" %d", 0);}

    return 0;
    */

    int x;
    int a = 0, b = 0, c = 0, d =0;
    _Bool q1, q2;

    scanf("%d",&x);
    q1 = (x % 2 == 0);
    q2 = (x > 4 && x <= 12);

    if(q1 && q2)a = 1;
    if(q1 || q2)b = 1;
    if((q1 && !q2) || (!q1 && q2))c = 1;
    if(!q1 && !q2)d = 1;

    printf("%d %d %d %d", a, b, c, d);

    return 0;

}