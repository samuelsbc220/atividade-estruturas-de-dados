#include <stdio.h>

int main() {
    float sensores[5][24];
    float medias[5];
    float somaGeral = 0;
    float maiorTemperatura;
    float limite;

    int sensorMaior = 0;
    int horarioMaior = 0;
    int acimaLimite = 0;

    for (int i = 0; i < 5; i++) {
        float somaSensor = 0;

        printf("\nSensor %d\n", i);

        for (int j = 0; j < 24; j++) {
            printf("Temperatura no horario %d: ", j);
            scanf("%f", &sensores[i][j]);

            somaSensor += sensores[i][j];
            somaGeral += sensores[i][j];

            if (i == 0 && j == 0) {
                maiorTemperatura = sensores[i][j];
            }

            if (sensores[i][j] > maiorTemperatura) {
                maiorTemperatura = sensores[i][j];
                sensorMaior = i;
                horarioMaior = j;
            }
        }

        medias[i] = somaSensor / 24;
    }

    printf("\nMedias dos sensores:\n");

    for (int i = 0; i < 5; i++) {
        printf("Sensor %d: %.2f\n", i, medias[i]);
    }

    printf("\nMaior temperatura: %.2f\n", maiorTemperatura);
    printf("Sensor responsavel: %d\n", sensorMaior);
    printf("Horario: %d\n", horarioMaior);

    printf("\nMedia geral: %.2f\n", somaGeral / 120);

    printf("\nDigite o limite de temperatura: ");
    scanf("%f", &limite);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 24; j++) {
            if (sensores[i][j] > limite) {
                acimaLimite++;
            }
        }
    }

    printf("Quantidade de leituras acima do limite: %d\n", acimaLimite);

    return 0;
}
