#include <stdio.h>

int main() 
{
  // Baris pertama adalah sebuah nilai numerik antara 0-200
  int num1;
  scanf("%d", &num1);

  // Baris kedua adalah sebuah karakter ASCII
  char char_value;
  scanf(" %c", &char_value);

  // Baris ketiga adalah sebuah nilai yang akan dimaknai sebagai boolean
  int bool_value;
  scanf("%d", &bool_value);

  // Baris keempat adalah sebuah nilai numerik non-negatif
  unsigned int num2;
  scanf("%u", &num2);

  // Baris kelima adalah sebuah fraction point dengan dua angka presisi
  float float_value;
  scanf("%f", &float_value);

  // Keluaran program
  printf("%d\n%c\n%d\n%u\n%.2f\n", num1, char_value, bool_value, num2, float_value);

  return 0;
}