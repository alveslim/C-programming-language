# include <stdio.h>

struct Ponto {
    float x;
    float y;
};

int main() {
    struct Ponto ponto;
    printf("Digite as coordenadas do ponto (x e y): ");
    scanf("%f %f", &ponto.x, &ponto.y);
    printf("Coordenadas do ponto: (%.2f, %.2f)", ponto.x, ponto.y);
    return 0;
}