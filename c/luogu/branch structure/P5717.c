#include <stdio.h>
int main(void)
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    int length[] = {0, a, b, c};

    for (int i = 0; i < 4; i++) //利用冒泡排序确定abc长度大小
    {
        for (int j = 0; j < 3; j++)  //冒泡应比较i-1次
        {
            if (length[j] > length[j + 1])
            {
                tmp = length[j];
                length[j] = length[j + 1];
                length[j + 1] = tmp;
            }
        }
    }

    if (length[1] + length[2] <= length[3])
        {
            printf("Not triangle\n");
            return 0;
        }
    if (length[1] * length[1] + length[2] * length[2] == length[3] * length[3])
        printf("Right triangle\n");
    else if (length[1] * length[1] + length[2] * length[2] < length[3] * length[3])
        printf("Obtuse triangle\n");
    else if(length[1] * length[1] + length[2] * length[2] > length[3] * length[3]) 
        printf("Acute triangle\n");
    if (a == b || a == c || b == c)
        printf("Isosceles triangle\n");
    if (a == b && b == c)
        printf("Equilateral triangle\n");

    return 0;
}