#include<stdio.h>
int main(void)
{
    int sort[3],tmp,n;
    
    for(int i = 0; i < 3; i++)      //利用for、数组存入无序数据，采用冒泡排序
    {
        scanf("%d",&n);
        sort[i] = n;
    }
    
    for (int i = 0; i < 3; i++)     //循环次数
    {
        for (int j = 0; j < 3; j++)
        {
            if(sort[j] > sort[j + 1])   // 比较次数
            {
                tmp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = tmp;
            }
        }
    }
     
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", sort[i]);
    }
    
    return 0;
}