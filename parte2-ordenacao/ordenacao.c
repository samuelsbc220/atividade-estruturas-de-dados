#include <stdio.h>
#include <stdlib.h>

long long comparacoesBubble = 0;
long long trocasBubble = 0;
long long comparacoesQuick = 0;
long long movimentacoesQuick = 0;

void copiarVetor(int origem[], int destino[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}

void bubbleSort(int vetor[], int tamanho) {
    comparacoesBubble = 0;
    trocasBubble = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int houveTroca = 0;

        for (int j = 0; j < tamanho - 1 - i; j++) {
            comparacoesBubble++;

            if (vetor[j] > vetor[j + 1]) {
                int auxiliar = vetor[j];

                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;

                trocasBubble++;
                houveTroca = 1;
            }
        }

        if (houveTroca == 0) {
            break;
        }
    }
}

void trocarQuick(int *a, int *b) {
    int auxiliar = *a;

    *a = *b;
    *b = auxiliar;

    movimentacoesQuick += 3;
}

int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        comparacoesQuick++;

        if (vetor[j] <= pivo) {
            i++;

            if (i != j) {
                trocarQuick(&vetor[i], &vetor[j]);
            }
        }
    }

    if (i + 1 != fim) {
        trocarQuick(&vetor[i + 1], &vetor[fim]);
    }

    return i + 1;
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = particionar(vetor, inicio, fim);

        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

void realizarTeste(int tamanho) {
    int *original = malloc(tamanho * sizeof(int));
    int *bubble = malloc(tamanho * sizeof(int));
    int *quick = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        original[i] = rand() % 10000;
    }

    copiarVetor(original, bubble, tamanho);
    copiarVetor(original, quick, tamanho);

    bubbleSort(bubble, tamanho);

    comparacoesQuick = 0;
    movimentacoesQuick = 0;

    quickSort(quick, 0, tamanho - 1);

    printf("\nTeste com %d elementos\n", tamanho);

    printf("\nBubble Sort\n");
    printf("Comparacoes: %lld\n", comparacoesBubble);
    printf("Trocas: %lld\n", trocasBubble);

    printf("\nQuick Sort\n");
    printf("Comparacoes: %lld\n", comparacoesQuick);
    printf("Movimentacoes: %lld\n", movimentacoesQuick);

    free(original);
    free(bubble);
    free(quick);
}

int main() {
    srand(42);

    realizarTeste(10);
    realizarTeste(20);
    realizarTeste(1000);

    return 0;
}
