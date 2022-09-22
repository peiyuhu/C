#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define C 4
typedef struct Lnode
{

    int grade[4];
    int id[30];
    char name[20];
    float average;
    struct Lnode *next;
}student;
student *head;
int n;

average()
{
    int i,j;
    float sum,ave;
    student *p;
    printf("每门课程平均成绩：\n");
    printf("     课程       平均成绩\n");
    for ( i = 0; i < C; i++)
    {
        i = 0;
        sum = 0;
        p = head;
        while (p -> next)
        {
            sum += p -> grade[i];
            p = p -> next;
            j++;
        }
        
    }
    
}

void main(void)
{
    student *p, *q;
    int i, j;
    float sum;
    printf("输入学生人数！\n");
    scanf("%d", &n);
    head = (student *)malloc(sizeof(student));
    q = head;

    for ( i = 0; i < n; i++)
    {
        printf("输入第%d个学生的学号和姓名:\n", i + 1);
        p = q;
        scanf("%d\n", &p -> id);
        scanf("%s", p -> name);
        printf("\n");
        printf("输入该学生的课程成绩：\n", i + 1);

        for ( j = 0; j < C; j++)
        {
            scanf("%d", &p -> grade[j]);
        }

        q = (student *)malloc(sizeof(student)) ;
        q -> next = NULL;
        p -> next = q;
    }
   p = head;
   while(p -> next) 
   {
    sum = 0;
    for(j = 0; j < C; j++)
        sum += p->grade[j];
    p ->average = sum / C;
    p = p->next;
   }
    average();

}