#include <stdio.h>

int main(void)
{
  int *p;
  int c =  10;
  p = &c;
  (*p)++;
  *p = (*p) * 10;
  printf("Valor de c: %d\n", c);
  printf("Valor de c: %d\n", p);
  
  return(0);
}