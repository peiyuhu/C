// const部分用法
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    const int * const pc = days;
    // pc = &days[2];          //后const限制
    // *pc = 92.99;            //前const限制
    
    return 0;
}
