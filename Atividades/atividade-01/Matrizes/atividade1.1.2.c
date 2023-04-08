//
// Created by lucas on 08/04/23.
//
#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &N);

    int matriz1[N][N], matriz2[N][N], soma[N][N];
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Calculando a soma das matrizes
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("A matriz soma é:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}