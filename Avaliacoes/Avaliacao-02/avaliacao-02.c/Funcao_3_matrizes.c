
#include <stdio.h>

#define L 3  // Tamanho das matrizes

void soma_matrizes(int n, int A[][n], int B[][n], int C[][n]) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void imprimir (int n, int matriz[][n]) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[L][L] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[L][L] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};

    int C[L][L];

    soma_matrizes(L, A, B, C);

    printf("Matriz A:\n");
    imprimir(L, A);

    printf("Matriz B:\n");
    imprimir(L, B);

    printf("Matriz C (A + B):\n");
    imprimir(L, C);

    return 0;
}