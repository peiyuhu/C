#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char studentId[16];
    char name[8];
    int achievement[4];
    float average;
    struct node *next;
} Student;

Student *input(Student *head, int *n)
{
    Student *node, *end;
    head->next = NULL;
    end = head;
    for (int i = 0; i < *n; i++)
    {
        node = (Student *)malloc(sizeof(Student));

        printf("请输入第%d名学生的学号:\n", i + 1);
        scanf("%s", &node->studentId);

        printf("请输入第%d名学生的姓名:\n", i + 1);
        scanf("%s", &node->name);

        printf("请输入第%d名学生的语文成绩:\n", i + 1);
        scanf("%d", &node->achievement[0]);

        printf("请输入第%d名学生的数学成绩:\n", i + 1);
        scanf("%d", &node->achievement[1]);

        printf("请输入第%d名学生的英语成绩:\n", i + 1);
        scanf("%d", &node->achievement[2]);

        printf("请输入第%d名学生的体育成绩:\n", i + 1);
        scanf("%d", &node->achievement[3]);

        printf("\n");

        //平均成绩
        node->average = 0;
        node->average += node->achievement[0];
        node->average += node->achievement[1];
        node->average += node->achievement[2];
        node->average += node->achievement[3];
        node->average /= 4;

        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}

void findStudents(Student *head, int *n);
void findFailedStudents(Student *head, int *n);
void findExcellentStudents(Student *head, int *n);
void function(Student *head, int *n);

int main()
{
    int n;
    printf("请输入学生总人数：");
    scanf("%d", &n);
    Student *head = (Student *)malloc(sizeof(Student));
    head = input(head, &n);
    function(head, &n);
    system("pause");
    return 0;
}

void findStudents(Student *head, int *n)
{
    char student[16];
    int i;
    Student *end = head;
    end = end->next;
    printf("请输入要学生的学号:\n");
    scanf("%s", student);
    for (i = 0; i < *n; i++)
    {
        if (strcmp(end->studentId, student) == 0)
        {
            printf("该学生的信息为:\n");
            printf("学号: %s\n姓名: %s\n", end->studentId, end->name);
            printf("语文成绩: %d\n", end->achievement[0]);
            printf("数学成绩: %d\n", end->achievement[1]);
            printf("英语成绩: %d\n", end->achievement[2]);
            printf("体育成绩: %d\n", end->achievement[3]);
            printf("平均成绩: %.1f\n", end->average);
            break;
        }
        end = end->next;
    }
    if (i == *n)
    {
        printf("未查询到该学生信息\n\n");
    }
}

void findFailedStudents(Student *head, int *n)
{
    int sum = 0;
    Student *end = head;
    end = end->next;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (end->achievement[j] < 60)
            {
                if (sum == 0)
                {
                    printf("考试不及格的学生有:");
                }
                sum++;
                printf("%s ", end->name);
                break;
            }
        }
        end = end->next;
    }
    if (sum == 0)
    {
        printf("没有找到不及格的学生\n");
    }
    printf("\n\n");
}

void findExcellentStudents(Student *head, int *n)
{
    int sum = 0;
    Student *end = head;
    end = end->next;
    for (int i = 0; i < *n; i++)
    {
        if (end->average > 90)
        {
            if (sum == 0)
            {
                printf("平均分在90分以上的学生有:");
            }
            sum++;
            printf("%s ", end->name);
        }
        end = end->next;
    }
    if (sum == 0)
    {
        printf("没有找到平均分在90分以上的学生\n");
    }
    printf("\n\n");
}

void function(Student *head, int *n)
{
    int selection = 0, sys = 1;
    while (sys)
    {
        printf("1.查询学生信息:\n");
        printf("2.查询不及格学生:\n");
        printf("3.查询平均分90以上的学生:\n");
        printf("4.退出:\n");
        while (1)
        {
            scanf("%d", &selection);
            if (selection >= 1 && selection <= 4)
            {
                break;
            }
            else
            {
                printf("请输入正确的序号:\n");
            }
        }
        switch (selection)
        {
        case 1:
            findStudents(head, n);
            break;
        case 2:
            findFailedStudents(head, n);
            break;
        case 3:
            findExcellentStudents(head, n);
            break;
        case 4:
            sys = 0;
        }
    }
}
