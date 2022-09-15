//        #include<stdio.h>
//        #include<cs50.h>
//        
//        int main(void)
//        {
//            int scores[3];
//        
//            scores[0] =  get_int("Scores1:");
//            scores[1] =  get_int("Scores2:");
//            scores[2] =  get_int("Scores3:");
//        
//            printf("Average Score: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
//        
//        
//        }

//        #include <stdio.h>
//        #include <cs50.h>
//                
//        int main(void)
//        {
//            int scores[n];
//                
//            for(int i = 0; i < n; i++)
//            {
//                scores[n] = get_int("Number:");
//            }      
//            printf("Average Score: %f\n", (scores[0] + scores[1] + scores[2]) / (float)n);
//               
//                
//        }
//           #include<stdio.h>
//           #include<cs50.h>
//           int main(void)
//           {
//               string name = get_string("Name:");
//
//               int n = 0;
//               while(name[n] != '0')
//               {
//                   i++;
//               }  
//               printf("%i\n",n);
//           }
//
//               #include<stdio.h>
//               #include<string.h>
//               #include<cs50.h>
//
//               int main(void)
//               {
//                   string s = get_string("Input:");
//                   printf("Output:");
//                   for(int i = 0; i < strlen(s); i++)
//                   {
//                       printf("%c", s[i]);
//                   }
//                   printf("\n");
//               }


 
//                 #include<stdio.h>
//                 #include<string.h>
//                 #include<cs50.h>
//                 int main(void)
//                {
//                     string s = get_string("Input:");
//                     printf("Output:");
//                     for(int i = 0, n = strlen(s); i < n; i++)
//                     {
//                         printf("%c", s[i]);
//                     }
//                     printf("\n");
//                }


//                     #include<stdio.h>
//                     #include<string.h>
//                     #include<cs50.h>
//                     int main(void)
//                    {
//                         string s = get_string("Before:");
//                         printf("After:");
//                         for(int i = 0, n = strlen(s); i < n; i++)
//                         {
//                           if (s[i] >= 'a' && s[i] <='z')
//                           {
//                                 printf("%c", s[i]-32);
//                           }
//                           else
//                           {
//                                printf("%c",s[i]);
//                           }
//                         }
//                        printf("\n");
//                    }


//                       #include <cs50.h>
//                       #include <ctype.h>
//                       #include <stdio.h>
//                       #include <string.h>
//                       
//                       int main(void)
//                       {
//                           string s = get_string("Before: ");
//                           printf("After:  ");
//                           for (int i = 0, n = strlen(s); i < n; i++)
//                           {
//                               if (islower(s[i]))
//                               {
//                                   printf("%c", s[i] - 32);
//                               }
//                               else
//                               {
//                                   printf("%c", s[i]);
//                               }
//                           }
//                           printf("\n");
//                       }


//                            #include <cs50.h>
//                            #include <ctype.h>
//                            #include <stdio.h>
//                            #include <string.h>
//                            
//                            int main(void)
//                            {
//                                string s = get_string("Before: ");
//                                printf("After:  ");
//                                for (int i = 0, n = strlen(s); i < n; i++)
//                                {
//                                    printf("%c", toupper(s[i]));
//                                }
//                                printf("\n");
//                            }





//                                  #include <cs50.h>
//                                  #include <stdio.h>
//                                    
//                                  int main(int argc, string agrv[])
//                                  {
//                                      printf("hello,%s\n",argv[1]);
//                                  }


//                               #include <cs50.h>
//                                #include <stdio.h>
//
//                                int main(int argc, string argv[])
//                                {
//                                    if(argc == 2)
//                                    {
//                                        printf("hello,%s\n",argv[1]);
//
//                                    }
//                                    else
//                                    {
//                                        printf("hello,world\n");
//                                    }
//                                }
//
//
//
//                                #include <cs50.h>
//                                #include <stdio.h>
//
//                                int main(int argc, string argv[])
//                                {
//                                    if (argc != 2)
//                                    {
//                                        printf("missing command-line argument\n");
//                                        return 1;
//                                    }
//                                    printf("hello, %s\n", argv[1]);
//                                    return 0;
//                                 }