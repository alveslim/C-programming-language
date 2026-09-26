#include <stdio.h>

int main() {
    int vetor[6] = {10, 20, 30, 40, 45, 50};
    
    int *inicio = &vetor[2]; // Aponta para o primeiro elemento (10)
    int *vetor_p = &vetor;
    int *fim = &vetor[5];    // Aponta para o último elemento (50)

    // Verifica qual ponteiro está em uma posição de memória mais alta
    if (inicio < fim) {
        printf("O ponteiro 'inicio' vem antes do ponteiro 'fim' na memoria.\n");
    }

    // Podemos descobrir a distância entre eles
    printf("Existem %ld elementos entre eles.\n", fim - inicio);
    if (vetor_p[1] == vetor[1])
        printf("O ponteiro 'vetor_p' aponta para o início do vetor.\n");
        printf("%ld elementos\n", vetor_p - vetor);
    
        return 0;
}