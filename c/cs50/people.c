//                #include <cs50.h>
//                #include <stdio.h>
//                #include <string.h>
//                
//                typedef struct 
//                {
//                    string name;
//                    string number;
//                };
//                person;
//                
//                int main(void)
//                {
//                    person people[2];
//                
//                    people[0].name = "Bill";
//                    people[0].number = "15070240728";
//                
//                    people[1].name = "Peter";
//                    people[1].number = "13870205378";
//                
//                    for(int i = 0; i < 2; i++)
//                    {
//                        if(strcmp(people[i].name) == 0)
//                        printf("Found,%s\n",people[i].name);
//                        return 0;
//                    }
//                    printf("Not found\n");
//                    return 1;
//                }