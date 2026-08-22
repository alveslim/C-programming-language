#include <stdio.h>
#include <math.h>

void distanciaOrigem(struct ponto p) {
    float distancia = sqrt(p.x * p.x + p.y * p.y);
    printf("Distance from origin: %.2f\n", distancia);

}

struct ponto {
    float y;
    float x;
};

int main() {
    struct ponto meu_ponto = {3.0, 4.0};
    distanciaOrigem(meu_ponto);
    return 0;
}