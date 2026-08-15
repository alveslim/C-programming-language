# include <stdio.h>

typedef struct {
    int id_pino;
    float temperatura;
    float umidade; 
}SensorAmbiental;

int main() {
    SensorAmbiental sensor_vetor[3] = {};
    
    for (int i = 0; i < 3; i++) {
        sensor_vetor[i].id_pino = i + 1;
        printf("Temperatura e Umidade resultando no sensor %d: ", sensor_vetor[i].id_pino);
        scanf("%f %f", &sensor_vetor[i].temperatura, &sensor_vetor[i].umidade);
    }

    for (int i = 0; i < 3; i++) {
        printf("Sensor %d: Temperatura = %.2f, Umidade = %.2f\n", sensor_vetor[i].id_pino, sensor_vetor[i].temperatura, sensor_vetor[i].umidade);
    }
    return 0;
}