#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char texto_base[] = "Linguagem C";
    
    // +1 para acomodar o terminador nulo '\0'
    char *copia = (char*) malloc((strlen(texto_base) + 1) * sizeof(char));

    if (copia == NULL) {
        printf("Falha na alocação.\n");
        return 1;
    }

    strcpy(copia, texto_base);
    printf("Texto copiado: %s\n", copia);

    free(copia);
    copia = NULL;
    return 0;
}