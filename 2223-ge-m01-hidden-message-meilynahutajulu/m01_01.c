// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int l = atoi(argv[1]); 

    char input[100]; 
    fgets(input, 100, stdin); 

    int length = strlen(input); 

    if(strlen(input) > 98){
      length = length;
    } else{
      length = length - 2;
    }

    
    int baris = (length + l - 1) / l;

    char hasil[baris][l+1]; 
    

    // cara alternatif
    // for (int i = 0; i < baris; i++) {
    //     for (int j = 0; j < l; j++) {
    //         hasil[i][j] = '#';
    //     }
    //     hasil[i][l] = '\0';
    // }
    
 
    char hash = '#';
    int kapasitas;
    kapasitas = l * baris;
    
    int a = 0; // a untuk indeks baris
    int b = 0; // b untuk indeks kolom
    for (int i = 0; i < kapasitas; i++) {
        
        if(i >= length){
          hasil[a][b] = hash;
        } else{
          hasil[a][b] = input[i];
        }
        b++;
        if (b == l) {
            hasil[a][b] = '\0';
            b = 0;
            a++;
        }
    }

    
    for (int i = 0; i < baris; i++) {
        printf("%s\n", hasil[i]);
    }

    
    for (int i = 0; i < l; i++) {


        for (int j = 0; j < baris; j++) {
            
                printf("%c", hasil[j][i]);
            
        }

    }
    

    return 0;
}
