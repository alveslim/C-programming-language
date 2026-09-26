#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct estrutura {
    char nome[80]; // Aumentado para 80 para evitar overflow (buffer overflow)
    struct estrutura *prox;
} *p = NULL; // Ponteiro global inicializado corretamente

void inserir_nome(void);
void imprimir_tudo(void);

int main() {
    int n = 0; // Removido o 'p = NULL' daqui, pois ofuscava o ponteiro global 'p'

    while (1) { // O while() estava vazio. Usando while(1) para loop infinito controlado
        printf("Informe o nome: ");
        inserir_nome(); // Corrigido erro de digitação (estava insirir_nome)

        printf("Deseja sair? (1 para sim, 0 para nao): ");
        scanf("%d", &n); // Usar scanf com %d para ler inteiros, não printf com %ls

        if (n == 1) {
            break;
        }
    }
    
    printf("\nNomes cadastrados:\n");
    imprimir_tudo(); // Chamada movida para fora do if/loop para imprimir tudo ao final
    
    return 0;
}

void inserir_nome(void) {
    struct estrutura *q, *r;
    char nome2[80];
    
    scanf(" %79[^\n]", nome2); // Corrigido de %ls para %s (lendo string normal e limitando tamanho)

    if (p == NULL) {
        p = (struct estrutura*) malloc(sizeof(struct estrutura));
        strcpy(p->nome, nome2);
        p->prox = NULL;
    } else {
        q = p;
        while (q->prox != NULL) {
            q = q->prox;
        }
        r = (struct estrutura*) malloc(sizeof(struct estrutura));
        strcpy(r->nome, nome2); // Corrigido: estava gravando em p->nome novamente em vez de r->nome
        q->prox = r;
        r->prox = NULL;
    }
}

// O nome da função estava diferente da declaração (imprima_tudo vs imprimir_tudo)
void imprimir_tudo(void) { 
    struct estrutura *q = p; // ERRO GRAVE: q não estava inicializado. Agora aponta para a cabeça (p)
    
    while (q != NULL) {
        printf("Nome: %s\n", q->nome); // Adicionado \n para quebra de linha
        q = q->prox;
    }
}