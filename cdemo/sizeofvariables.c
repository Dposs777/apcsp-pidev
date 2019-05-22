#include<stdio.h>

int main()
{
  int a = 5;
  char b = 'z';
  float c = 12.53;
  double d = 99.732;
  unsigned int e = 7;
  signed int f = 12;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("signed f value: %d and size: %d bytes\n", f, sizeof(f));
}
