#include <stdio.h>
int main(void)
{
    int b = 0;
    printf("%d %d %d %d %d", ++b, b, b++, ++b, b++);

    return 0;
}