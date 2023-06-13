//12S22031 - Ioka Purba
//12S22039 - Meilyna Hutajulu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kamus_t
{
  char kata[20];

  char artikata[80];
};

int main(int _argc, char **_argv)
{

  struct kamus_t kamus[5];
  char input[10];
  char katafind[20];


  int i = 0;
  int y = 0;
  while (y == 0){
    scanf("%s", input); 

    if (strcmp(input, "register") == 0){
     
      scanf("%s", kamus[i].kata);
        scanf(" ");
        scanf("%99[^\n]",  kamus[i].artikata);

      //scanf(" %99[a-zA-Z0-9;:- ]", kamus[i].artikata); 

         i++; 
    }
           else if (strcmp(input, "find") == 0){

              scanf("%s", katafind);
              
                for(int a = 0; a < i; a++){

                    if(strcmp(katafind, kamus[a].kata) == 0){
                          printf("%s#%s\n", kamus[a].kata, kamus[a].artikata);          
                          }
                }
            }
    else if ((strcmp(input, "---") == 0))
    { 
      y = y + 1;
    }
    
    }
  

  return 0;
}
