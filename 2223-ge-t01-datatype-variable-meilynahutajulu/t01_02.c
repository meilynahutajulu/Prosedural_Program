// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argc, char **_argv)
{
  float a, b, c, d, e, total, mean;
  scanf(" %f", &a);
  scanf(" %f", &b);
  scanf(" %f", &c);
  scanf(" %f", &d);
  scanf(" %f", &e);
total = a+b+c+d+e;
mean = total/5;

  printf("%.3f\n%.3f", total, mean);

  return 0;
}
