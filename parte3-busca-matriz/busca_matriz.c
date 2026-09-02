#include <stdio.h>

int buscarValor(int linhas, int colunas, int matriz[linhas][colunas], int valor) {
    int comparacoes = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            comparacoes++;

            if (matriz[i][j] == valor) {
                printf("Valor encontrado\n");
                printf("Linha: %d\n", i);
                printf("Coluna: %d\n", j);
                printf("Comparacoes: %d\n", comparacoes);

                return comparacoes;
            }
        }
    }

    printf("Valor nao encontrado\n");
    printf("Comparacoes: %d\n", comparacoes);

    return comparacoes;
}

void teste2x2() {
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };

    printf("\nMatriz 2x2\n");

    printf("\nBusca no inicio:\n");
    buscarValor(2, 2, matriz, 1);

    printf("\nBusca no final:\n");
    buscarValor(2, 2, matriz, 4);

    printf("\nValor inexistente:\n");
    buscarValor(2, 2, matriz, 99);
}

void teste10x10() {
    int matriz[10][10];
    int valor = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    printf("\nMatriz 10x10\n");

    printf("\nBusca no inicio:\n");
    buscarValor(10, 10, matriz, 1);

    printf("\nBusca no final:\n");
    buscarValor(10, 10, matriz, 100);

    printf("\nValor inexistente:\n");
    buscarValor(10, 10, matriz, 999);
}

void teste100x100() {
    int matriz[100][100];
    int valor = 1;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    printf("\nMatriz 100x100\n");

    printf("\nBusca no inicio:\n");
    buscarValor(100, 100, matriz, 1);

    printf("\nBusca no final:\n");
    buscarValor(100, 100, matriz, 10000);

    printf("\nValor inexistente:\n");
    buscarValor(100, 100, matriz, 99999);
}

int main() {
    teste2x2();
    teste10x10();
    teste100x100();

    return 0;
}
