            /*#include <stdio.h>
            
            int main(void)
            {
                int n = 50;
                int *p = &n;
                printf("%p\n,p");
            }


                #include <stdio.h>

                int main(void)
                {
                    int n = 50;
                    int *p = &n;
                    printf("%p\n",p);
                    printf("%i\n",*p);
                }


                  #include <stdio.h>

                  int main(void)
                  {
                      char *s = "BYE!";
                      printf("%s\n",s);
                  }


                   #include <stdio.h>

                   int main(void)
                   {
                       char *s = "HI!";
                       printf("%p\n", s);
                       printf("%p\n", &s[0]);
                       printf("%p\n", &s[1]);
                       printf("%p\n", &s[2]);
                       printf("%p\n", &s[3]);
                   }


                       #include <stdio.h>              

                       int main(void)
                       {
                           char *s = "HI!";
                           printf("%c\n", s[0]);
                           printf("%c\n", s[1]);
                           printf("%c\n", s[2]);
                       }
                       

                       #include <stdio.h>

                       int main(void)
                       {
                           char *s = "HI!";
                           printf("%c\n", *s);
                           printf("%c\n", *(s + 1));
                           printf("%c\n", *(s + 2));
                       }




                        #include <cs50.h>
                        #include <ctype.h>
                        #include <stdio.h>
                        #include <stdlib.h>
                        #include <string.h>

                        int main(void)
                        {
                            char *s = get_string("s:");

                            char *t = malloc(strlen(s) + 1);
                            for(int i = 0, n = strlen(s) + 1; i < n; i++)
                            {
                                t[i] = s[i];                     或者  strcpy(t,s);             
                            }
                            t[0] = toupper(t[0]);

                            printf("s: %s\n",s);
                            printf("t: %s\n",t);
                              free(t);

                        }



                            #include <cs50.h>
                            #include <ctype.h>
                            #include <stdio.h>
                            #include <stdlib.h>
                            #include <string.h>
                            
                            int main(void)
                            {
                                char *s = get_string("s: ");
                            
                                char *t = malloc(strlen(s) + 1);
                                if (t == NULL)
                                {
                                    return 1;
                                }
                            
                                strcpy(t, s);
                            
                                if (strlen(t) > 0)
                                {
                                    t[0] = toupper(t[0]);
                                }
                            
                                printf("s: %s\n", s);
                                printf("t: %s\n", t);
                            
                                free(t);
                            }




                                   #include <stdio.h>
                                   #include <stdlib.h>

                                   int main(void)
                                   {
                                       int *x = malloc(3 * sizeof(int));
                                       x[0] = 72;
                                       x[1] = 73;
                                       x[2] = 33;
                                      free(x);
                                   }






                                   #include <stdio.h>
                                   
                                   void swap(int a, int b);
                                   
                                   int main(void)
                                   {
                                       int x = 1;
                                       int y = 2;
                                   
                                       printf("x is %i, y is %i\n", x, y);
                                       swap(x, y);
                                       printf("x is %i, y is %i\n", x, y);
                                   }
                                   
                                   void swap(int a, int b)
                                   {
                                       int tmp = a;
                                       a = b;
                                       b = tmp;
                                   }



                                #include<stdio.h>
                                
                                void swap(int *a, int *b);
                                
                                int main(void)
                                {
                                    int x = 0;
                                    int y = 20;
                                
                                    printf("x is %i, y is %i\n",x,y);
                                    swap(&x, &y);
                                    printf("x is %i, y is %i\n",x,y);
                                
                                }
                                void swap(int *a, int *b)
                                {
                                    int tmp = *a;
                                    *a = *b;
                                    *b = tmp;
                                }




                                   #include <stdio.h>

                                   int main(void)
                                   {
                                       int x;
                                       printf("x:");
                                       scanf("%i", &x);
                                       printf("x is %i",x);
                                   }


                                      #include <stdio.h>
                                      int main(void)
                                      {
                                          char *s = malloc(4);
                                          printf("x:");
                                          scanf("%s",&s);
                                          printf("s is %s\n",s);
                                          
                                      }
                                      
                                      


                                     #include <stdio.h>
                                     
                                     int main(void)
                                     {
                                       char s[4];
                                       printf("s:");
                                       scanf("%s", &s);
                                       printf("s is %s\n",s);
                                    }
*/