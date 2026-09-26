/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 5;
    int colunas = 5;

    // 1. ALOCAÇÃO DINÂMICA
    // Aloca um vetor de 5 ponteiros (um para cada linha)
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    
    // Aloca as colunas para cada linha individualmente
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // 2. PREENCHIMENTO
    // Preenche a matriz com valores sequenciais para exemplo
    int contador = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = contador++;
        }
    }

    // 3. APRESENTAÇÃO
    printf("--- Exibindo a Matriz Alocada Dinamicamente ---\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%2d ", matriz[i][j]); // %2d serve para alinhar os números
        }
        printf("\n");
    }

    // 4. LIBERAÇÃO DA MEMÓRIA (FREE)
    // Primeiro, liberamos a memória de cada linha (colunas)
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    // Por fim, liberamos o ponteiro principal (vetor de linhas)
    free(matriz);

    printf("\nMemoria liberada com sucesso!\n");

    return 0;
}

