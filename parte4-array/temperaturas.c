#include <stdio.h>

int main() {
    float temperatura[10];
    float soma = 0;
    float media;
    float maior;
    float menor;

    int indiceMaior = 0;
    int indiceMenor = 0;
    int acimaMedia = 0;
    int percursos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a temperatura %d: ", i);
        scanf("%f", &temperatura[i]);

        soma += temperatura[i];
        percursos++;
    }

    media = soma / 10;

    maior = temperatura[0];
    menor = temperatura[0];

    for (int i = 0; i < 10; i++) {
        printf("Indice %d: %.2f\n", i, temperatura[i]);

        if (temperatura[i] > maior) {
            maior = temperatura[i];
            indiceMaior = i;
        }

        if (temperatura[i] < menor) {
            menor = temperatura[i];
            indiceMenor = i;
        }

        if (temperatura[i] > media) {
            acimaMedia++;
        }

        percursos++;
    }

    printf("\nMedia: %.2f\n", media);

    printf("Maior temperatura: %.2f\n", maior);
    printf("Indice do maior valor: %d\n", indiceMaior);

    printf("Menor temperatura: %.2f\n", menor);
    printf("Indice do menor valor: %d\n", indiceMenor);

    printf("Valores acima da media: %d\n", acimaMedia);

    printf("Percursos do array: %d\n", percursos);

    printf("Complexidade: O(n)\n");

    return 0;
}
