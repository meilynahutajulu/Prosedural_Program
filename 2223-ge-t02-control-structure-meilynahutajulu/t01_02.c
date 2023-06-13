// 12S22031 - Ioka E. Purba
// 12S22039 - Meilyna S. A. Hutajulu

#include <stdio.h>

int main(int _argc, char **_argv) {
    int du = 0;
    int db = 0;
    unsigned short waktutr_b = 0;
    unsigned short waktutr_u = 0;
    unsigned short totalantrian = 0;

    scanf(" %hu", &du);
    scanf(" %hu", &db);
    
    while(du > 0 || db > 0){
        if (du > 0){
            waktutr_u = waktutr_u + 3;
            du = du - 3;
            if (db > 0) {
                waktutr_b = waktutr_b + 3;
            }
        }
        if (db > 0) {
            waktutr_b = waktutr_b + 3;
            db = db - 3;
            if (du > 0) {
                waktutr_u = waktutr_u + 3;
            }
        }
    }
    totalantrian = waktutr_b + waktutr_u;
    printf("%hu\n%hu\n%hu\n", waktutr_u, waktutr_b, totalantrian);
    
    return 0;
}