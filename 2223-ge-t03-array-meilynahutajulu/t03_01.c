// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu

#include <stdio.h> 

int main (int _argc, char **_argv){
    
    int n;
    int i;
    
    scanf("%d", &n);
    int deret[n];
     
    
    scanf("%d", &deret[0]);
    
     

    int terbesar =  deret[0];
    int terkecil =  deret[0];
    
   

    for(i = 1; i < n; i++){

        scanf("%d", &deret[i]);
        
        if (terbesar < deret[i]){
            terbesar = deret[i];
        } 
        if (terkecil > deret[i]){
            terkecil = deret[i];
        }
       
       


    }
  
  

  printf("%d\n", terkecil);
  printf("%d\n", terbesar);
  

  return 0;

}