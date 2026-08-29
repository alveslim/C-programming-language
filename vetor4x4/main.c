// faca um programa em c que leia um vetor 4x4 e mostre os dados desse vetor 4x4

# include <stdio.h>

int main(){
    printf("--- lendo 4x4 ---\n");
    int mat[4][4];

    // leitura: 
    for(int i = 0; i < 4; i++){
        
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // print: 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\n", mat[i][j]);
        }
    }
}