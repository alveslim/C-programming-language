#include <stdio.h>

int main() {
    int x = 50;
    int y = 50;
    int *p = &x;
    int *p1 = &y;

    // Comparando ENDEREÇOS (será falso, pois x e y estão em locais diferentes)
    if (p == p1) {
        printf("Enderecos iguais.\n");
    } else {
        printf("Enderecos diferentes.\n");
    }

    // Comparando VALORES APONTADOS (será verdadeiro, pois 50 == 50)
    if (*p == *p1) {
        printf("Os valores dentro das variaveis sao iguais: %d\n", *p);
    } else {
        printf("Os valores sao diferentes.\n");
    }

    return 0;
}