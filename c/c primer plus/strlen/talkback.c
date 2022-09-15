// 演示与用户交互
#include<stdio.h>
#include<string.h>    // 提供strlen（）函数的原型
#define DENSITY 62.4  // 人体密度（磅/立方英尺） 
int main(void)
{
    float weight, volume;
    int size, letters; 
    char name[40];

    printf("What's your first name?\n");
    scanf("%s", name);
    printf("%s,What's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("%s,your volume is %2.2f cubicfeet\n", name, volume);
    printf("your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}