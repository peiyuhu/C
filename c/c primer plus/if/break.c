// break在while和for中区别,break只会跳出包含它的当前循环
#include<stdio.h>
int main(void)
{
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if(i == 5)
            break;
        printf("%d\n", i); 
    }
    
    printf("\n");    

    while(count < 10)
    {
        if (count == 5)
            break;
        printf("%d\n", count);
        count++;
    }
   system("pause");
   return 0;
}