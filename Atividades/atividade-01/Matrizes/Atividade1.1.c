//
// Created by lucas on 08/04/23.
//
#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &N);

    int matriz[N][N];
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal da matriz:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}