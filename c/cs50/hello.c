

 #include <stdio.h>

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    printf("meow\n");
  }
}
//      引入函数（1） 
//              #include <stdio.h>
//          
//              void meow(void);
//          
//              int main(void)
//              {
//                  for (int i = 0; i < 3; i++)
//                  {
//                        meow();
//                    }
//              }
//          
//              void meow(void)
//              {
//                  printf("meow\n");
//              }


//              引入函数（2）为函数添加参数
//              #include <stdio.h>
//              void wow(int n);
//              int main(void)
//              {
//                  wow(3);
//              }
//              void  wow(int n)
//              {   for (int i = 0; i < n ; i++)
//                  printf("wow\n");
//              }