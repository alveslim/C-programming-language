#include <stdio.h>

int main(void)
{
  //declaração de variável ponteiro
  int *p;
  char *y;
  float *x;
  struct ponto *z;
  int soma, *p2;
  p2 = &soma;
  *p2 = 10;
  printf("Valor de soma: %d\n", soma);
  
  return(0);
}