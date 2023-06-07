#include <stdio.h>

int main() {
    char nameArquivo[100];
    char caracter;
    FILE *arquive;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nameArquivo);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &caracter);

    arquive = fopen(nameArquivo, "r");

    if (arquive == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (!feof(arquive)) {
        char c = fgetc(arquive);
        if (c == caracter) {
            contador++;
        }
    }

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caracter, contador);

    fclose(arquive);

    return 0;
}