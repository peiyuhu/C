// continue在while和for中区别
#include<stdio.h>
int main(void)
{
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if(i == 5)
            continue;
        printf("%d\n", i); 
    }
    
    printf("\n");    

    while(count < 10)
    {
        if (count == 5)
            continue;
        printf("%d\n", count);
        count++;
    }
   system("pause");
   return 0;
}