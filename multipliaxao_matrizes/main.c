// faca um programa em c qyue realize a mutiplicacao de duas matrizes 3x3
# include <stdio.h>

int main(){
    int matriz_1[3][3];
    int matriz_2[3][3];
    int matriz[3][3];

    for (int i = 0; i < 4; i++){
        for(int j = 0; i < 4; j++){
            printf("Escreva o resultado da matriz 1: ");
            scanf("%d", &matriz_1[i][j]);
            printf("Escreva o resultado da matriz 2: ");
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; i < 4; j++){
            matriz[i][j] = matriz_1[i][2-j] * matriz_2[2-i][j]; // correto???
        }
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; i < 4; j++){
            printf("[%d] ", matriz[i][j]);
        }
    }
}

// n[i][j] = a[i][1] * b[1][j] + a [i][2] * b[2][j]