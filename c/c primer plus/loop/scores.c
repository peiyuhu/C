// 使用循环处理数组
#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("请输入 %d 个你的分数：\n", SIZE);
    for (index = 0; index < SIZE; index++)
    {
        scanf("%d", &score[index]);
    }
    printf("你输入的数字以按读取！\n");
    for (index = 0; index < SIZE; index++)
    {
        printf("%5d", score[index]);
    }
    printf("\n");
    for (index = 0; index < SIZE; index++)
    {
        sum += score[index];
    }
    average = (float) sum / SIZE;
    printf("总分：%d, 平均分：%.2f\n", sum, average);
    printf("差点，即平均分与标准分的差值为：%.0f\n", average - PAR);

    return 0;
}