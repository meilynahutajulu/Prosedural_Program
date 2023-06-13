// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu

#include <stdio.h>

int main (){
    
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
  
  


  int a;
   a = 0;
   
   float ratakecil;
   float avg[n];

   avg[0] = (float)(deret[0] + deret[1]) / 2;

   

   ratakecil = avg[0];

   

   a = a + 1;
   
  for(i = 1; i < n-1 ; i++){
      
     
    avg[a] = (float)(deret[i] + deret[i+1]) / 2;
    
     
    if(avg[a] < ratakecil){

        ratakecil = avg[a];
    } else {
      ratakecil = ratakecil;
    }
    a = a + 1;
   }

  printf("%.2f", ratakecil);


  return 0;

}