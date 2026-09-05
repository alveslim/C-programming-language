#include <stdio.h>

int main(void)
{

    void *pp;
    int p2 = 10;

    pp = &p2;
    printf("Conteudo: %d\n", *pp);
    printf("Valor de p2: %d\n", *(int*)pp);
  return(0);
}