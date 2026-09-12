#include <stdio.h>

int main() {
    int vetor[6] = {10, 20, 30, 40, 45, 50};
    
    int *inicio = &vetor[0]; // Aponta para o primeiro elemento (10)
    int *fim = &vetor[5];    // Aponta para o último elemento (50)

    // Verifica qual ponteiro está em uma posição de memória mais alta
    if (inicio < fim) {
        printf("O ponteiro 'inicio' vem antes do ponteiro 'fim' na memoria.\n");
    }

    // Podemos descobrir a distância entre eles
    printf("Existem %ld elementos entre eles.\n", fim - inicio);

    return 0;
}