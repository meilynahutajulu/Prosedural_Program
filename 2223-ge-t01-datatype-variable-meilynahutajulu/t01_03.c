// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argc, char **_argv)
{
  unsigned short x, y, z, a, b;

  scanf(" %hu", &x);
  scanf(" %hu", &y);
  scanf(" %hu", &z);

  a = x << y;
  b = a == z;

  printf("%hu\n%hu", a, b);
  return 0;
}
