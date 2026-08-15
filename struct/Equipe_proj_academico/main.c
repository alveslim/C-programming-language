# include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
}Estudante;

typedef struct {
    int numero_grupo;
    char nome_projeto[100];
    Estudante vetor_integrantes[3];
}Equipe;

int main() {
    Equipe equipe_vetor[2] = {};

    for (int i = 0; i < 2; i++) {
        equipe_vetor[i].numero_grupo = i + 1;
        printf("nome do projeto %d:", equipe_vetor[i].numero_grupo);
        scanf("%s", &equipe_vetor[i].nome_projeto);
        for (int j = 0; j < 3; j++) {
            equipe_vetor[i].vetor_integrantes[j].matricula = j + 1;
            printf("Digite o nome do integrante do grupo %d: ", equipe_vetor[i].numero_grupo);
            scanf("%s", &equipe_vetor[i].vetor_integrantes[j].nome);
        }
        system("cls");
    }
    system("cls");
    if (equipe_vetor[1].numero_grupo == 2) {
        for (int i = 0; i < 2; i++) {
            printf("Grupo %d - Projeto: %s\n", equipe_vetor[i].numero_grupo, equipe_vetor[i].nome_projeto);
            printf("Integrantes:\n");
            for (int j = 0; j < 3; j++) {
                printf("Nome: %s, Matricula: %d\n", equipe_vetor[i].vetor_integrantes[j].nome, equipe_vetor[i].vetor_integrantes[j].matricula);
            }
        }
    }
    return 0;
}