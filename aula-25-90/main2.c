#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nome {
    char nome[50];
    struct Nome *prox;
} Nome;

Nome *inicio = NULL;

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void inserir_nome(void) {
    Nome *novo;
    Nome *atual;
    char nome[50];

    printf("Informe o nome: ");
    scanf("%49s", nome);
    limpar_buffer();

    novo = (Nome *)malloc(sizeof(Nome));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
        return;
    }

    atual = inicio;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = novo;
}

void imprimir_tudo(void) {
    Nome *atual = inicio;
    int contador = 1;

    printf("\nLista de nomes:\n");

    if (atual == NULL) {
        printf("Nenhum nome cadastrado.\n");
        return;
    }

    while (atual != NULL) {
        printf("%d. %s\n", contador, atual->nome);
        atual = atual->prox;
        contador++;
    }
}

int main(void) {
    int sair = 0;

    while (sair != 1) {
        inserir_nome();
        imprimir_tudo();

        printf("Deseja sair? (1 - Sim / 0 - Nao): ");
        scanf("%d", &sair);
        limpar_buffer();
        printf("\n");
    }

    printf("Programa encerrado.\n");
    return 0;
}