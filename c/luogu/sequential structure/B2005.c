#include<stdio.h>
int main(void)
{
    char c;

    scanf("%c",&c);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
           printf(" "); 
        }
        for(int j = 0; j < 2*i+1; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }

    return 0;
    
}