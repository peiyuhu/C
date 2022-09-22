// 统计字符数、单词数、行数
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
    char c;                         //读字符
    char prev;                      //读入前一个字符
    long n_chars = 0L;              //字符数 
    int n_lines = 0;                //行数
    int n_words = 0;                //单词数
    int p_lines = 0;                //不完整行数
    bool inword = false;            //若c在单词中，inword=true

    printf("继续输入（|结尾）");
    prev = '\n';                        //由于识别完整行
    while ((c = getchar() != STOP))
    {
        n_chars++;                      //统计字符
        if (c == '\n')
            n_lines++;                  //统计行
        if (!isspace(c) && !inword)
        {
            inword = true;              //开始一个新单词
            n_words++;                  //统计单词
        }
        if (isspace(c) && inword)
            inword = false;             //统计单词的末尾
        prev = c;                       //保存字符的值
        }
    if (prev != '\n')
        p_lines = 1;
    printf("char = %ld, words = %d, lines = %d,", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines); 

    return 0;
    }
    
