#include <stdio.h>

void contaValores(int vetores[], int n, int valor_inteiro_limite) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vetores[i] > valor_inteiro_limite) {
            count++;
        }
    }
    printf("Number of values greater than %d: %d\n", valor_inteiro_limite, count);
    printf("%d", vetores[-1]);
}

int main() {
    int vetorp[5] = {10, 20, 30, 40, 50};
    contaValores(vetorp, 5, 25);
    return 0;
}