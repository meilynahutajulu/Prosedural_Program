// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int panjang(char kata[]){
    
    int length = strlen(kata); 

    if(strlen(kata) > 98){
      length = length;
    } else{
      length = length - 2; 
    }

    return length;
}

int capacity(int _l, int _baris){
   int kapasitas;
    kapasitas = _l * _baris;
   
   return kapasitas;
}

char input(int _baris, int _l, int _length, char *kata, char _kata[_baris][_l+1]){
    
    char hash = '#';
    int kapasitas = capacity(_l, _baris);
    
    int a = 0; // a untuk indeks baris
    int b = 0; // b untuk indeks kolom
    for (int i = 0; i < kapasitas; i++) {
        
        if(i >= _length){
          _kata[a][b] = hash;
        } else{
          _kata[a][b] = kata[i];
        }
        b++;
        if (b == _l) {
            _kata[a][b] = '\0';
            b = 0;
            a++;
        }
    }

    for (int i = 0; i < _baris; i++) {
        printf("%s\n", _kata[i]);
    }

     for (int i = 0; i < _l; i++) {
        for (int j = 0; j < _baris; j++) {
            
                printf("%c", _kata[j][i]);
            
        }

    }
    
     printf("\n");
    return _kata[a][b];


}

int main(int argc, char *argv[])
{
    int l = atoi(argv[1]); 
    int length;
    char kata[100];
    fgets(kata, 100, stdin);

    length = panjang(kata);
    int baris = (length + l - 1) / l;
    char hasil [baris][l+1]; 
    
    input(baris, l, length, kata, hasil);

    return 0;
}
