# include <stdio.h>

typedef struct {
    char modelo[50];
    int memoria_vram;
    char barramento[50];
}PlacaDeVideo;

int main() {
    PlacaDeVideo placa;
    printf("Escreva as Especificações da placa de vídeo.\n(modelo, memória VRAM, barramento): \n");
    scanf("%s %d %s", &placa.modelo, &placa.memoria_vram, &placa.barramento);
    printf("Especificacoes da %s: \nMemoria VRAM: %dgb \nBarramento: %s", placa.modelo, placa.memoria_vram, placa.barramento);
    return 0;
}
