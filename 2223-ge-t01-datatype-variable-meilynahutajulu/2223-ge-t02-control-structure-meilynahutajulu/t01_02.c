// 12S22031 - Ioka E. Purba
// 12S22039 - Meilyna S. A. Hutajulu

#include <stdio.h>

int main(int _argc, char **_argv) {
  unsigned short du = 0;
  unsigned short db = 0;
  unsigned short wu = 0;
  unsigned short t = 3;
  unsigned short antrian_u = 0;
  unsigned short antrian_b = 0;
  unsigned short bagi_du = 0;
  unsigned short bagi_db = 0;
  unsigned short sisa_du = 0;
  unsigned short sisa_db = 0;
  unsigned short waktutr_b = 0;
  unsigned short waktutr_u = 0;
  unsigned short totalantrian = 0;

  scanf(" %hu", &du);
  scanf(" %hu", &db);

  bagi_du = du / t;  
  sisa_du = du % t;

  if (sisa_du > 0){
      antrian_u = bagi_du + 2;
  }
  else if (sisa_du = 0){
      antrian_u = bagi_du;
  }

  bagi_db = db / t;
  sisa_db = db % t;
  
  if (du == 0){
    antrian_b = 1;
  }
  else if (sisa_db > 0 && bagi_db > 0){
      antrian_b = bagi_db + 3;
  }
  else if(sisa_db > 0 && bagi_db == 0){
    antrian_b = 2;
  }
  else if (sisa_db = 0 && du > 0){
      antrian_b = bagi_db + 1;
  }


waktutr_u = antrian_u * 3;
waktutr_b = antrian_b * 3;

  totalantrian = waktutr_b + waktutr_u;

  printf("%hu\n%hu\n%hu\n", waktutr_u, waktutr_b, totalantrian);


  return 0;
}
