#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    int** matrizA = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matrizA[i] = (int*)malloc(colunas * sizeof(int));
    }


    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }


    int** matrizB = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matrizB[i] = (int*)malloc(colunas * sizeof(int));
    }

    printf("Inicializando matriz B com valores padrão:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizB[i][j] = i + j;
        }
    }

    int** matrizC = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matrizC[i] = (int*)malloc(colunas * sizeof(int));
    }

    printf("Inicializando matriz C com valores padrão:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizC[i][j] = i - j;
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizA[i][j] = matrizB[i][j] + matrizC[i][j];
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < linhas; i++) {
        free(matrizA[i]);
        free(matrizB[i]);
        free(matrizC[i]);
    }
    free(matrizA);
    free(matrizB);
    free(matrizC);

    return 0;
}