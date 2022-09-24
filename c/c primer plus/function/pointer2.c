// &和*
#include <stdio.h>
int main(void)
{
    int *a;
    int tmp;
    int c;

    a = &tmp;
    c = *a;
    printf("%d %d", a, c);

    return 0;
}