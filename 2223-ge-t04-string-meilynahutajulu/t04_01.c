// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char word[100];
    char kalimat[100];
   
    int l = atoi(argv[1]);

    int x=0;
    int sisa = 0;
    
    fgets(word, 100, stdin);
    // gets(word);
    // scanf("%[^\n]%*c", word);
    
    int length;
    if(strlen(word) > 98){

      length = strlen(word);
      
    } else {

      length = strlen(word) - 2;
    }

        for(int i = 0 ;i < length; i++){
           
            kalimat[i] = word[i];
          
            if(x < l){
                printf("%c",kalimat[i]);
             
            }
            else
            {
              
                printf("\n");
                printf("%c",kalimat[i]);
                
                x=0;
            }
            x=x+1;
        }
        sisa = l - x;
        for(int a = 1;a <= sisa; a++){
                 
                  printf("#");
                  
        }
    
    return 0;
}