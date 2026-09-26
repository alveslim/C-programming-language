#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    // Aloca espaço suficiente para uma estrutura Aluno inteira
    Aluno *a = (Aluno*) malloc(sizeof(Aluno));

    if (a == NULL) {
        return 1;
    }

    strcpy(a->nome, "Carlos");
    a->idade = 20;
    a->nota = 8.5;

    printf("Aluno: %s | Idade: %d | Nota: %.1f\n", a->nome, a->idade, a->nota);

    free(a);
    a = NULL;
    return 0;
}