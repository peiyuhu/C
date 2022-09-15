// 把秒钟转换成分和秒
#include<stdio.h>
#define SEC_MIN 60 
int main(void)
{
    int sec, min, left;

    printf("将秒转换成分和秒\n");
    printf("请输入你要转换的秒数：\n");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_MIN;   //截断的分钟
        left = sec % SEC_MIN;  //剩下的秒数
        printf("%d秒数转换成%d分钟以及%d秒钟\n", sec, min, left);
        printf("请输入下一个秒数：\n");
        scanf("%d", &sec);

    }
    printf("完成任务\n");

    return 0;    
}