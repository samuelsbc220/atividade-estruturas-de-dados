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

        for (int j = 0; j < 24; j++) {
            sensores[i][j] = 20 + i * 2 + (j % 10);

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

    printf("Medias dos sensores:\n");

    for (int i = 0; i < 5; i++) {
        printf("Sensor %d: %.2f C\n", i, medias[i]);
    }

    printf("\nMaior temperatura: %.2f C\n", maiorTemperatura);
    printf("Sensor responsavel: %d\n", sensorMaior);
    printf("Horario: %dh\n", horarioMaior);

    printf("\nMedia geral: %.2f C\n", somaGeral / 120);

    printf("\nDigite o limite de temperatura: ");
    scanf("%f", &limite);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 24; j++) {
            if (sensores[i][j] > limite) {
                acimaLimite++;
            }
        }
    }

    printf("Quantidade de leituras acima de %.2f C: %d\n",
           limite, acimaLimite);

    return 0;
}
