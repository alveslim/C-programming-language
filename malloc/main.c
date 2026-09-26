#include <stdio.h>
#include <stdlib.h>

int main() {
    // Aloca espaço para exatamente 1 inteiro
    int *p = (int*) malloc(sizeof(int));

    // Sempre confira se deu certo
    if (p == NULL) {
        return 1;
    }

    // Usa o ponteiro com o operador de desreferência (*)
    *p = 42;
    printf("Valor guardado: %d\n", *p);

    // Devolve a memória
    free(p);
    p = NULL;

    return 0;
}