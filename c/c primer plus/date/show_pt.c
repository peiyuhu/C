// 两种方式表达float类型值 %e 和 %f
#include<stdio.h>
#include<complex.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n",aboat,aboat);
    //下一行要求编译器支持C99或其中的相关特性
    printf("And it's %a in hexadecimal.powers of 2 notation\n",aboat);
    printf("%f can be writtenn %e\n",abet,abet);
    printf("%Lf canbe wrirtten %Le\n",dip, dip);
}
// _Imaginary    _Bool    _Complex
