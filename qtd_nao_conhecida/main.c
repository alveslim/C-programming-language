#include <stdio.h>
// faca um programa em c dado uma quantidade nao conhjecida de numeros o proggrana leia eses numeros e infoerm ao final o maior e o menor e o ponto medio desses numeros
// c alloc 
// m alloc vetores e matrizes
int main() {
    int qtd_num;

    printf("Digite a quantidade de numeros desejada: ");
    scanf("%d", &qtd_num);
    int numeros[qtd_num];

    for(int i = 0; qtd_num > i; i++){
        scanf("%d", &numeros[i]);
        // printf("%d \n", numeros[i]);
    }

    for(int i = 0; qtd_num > i; i++){
        printf("%d \n", numeros[i]);
    }

}