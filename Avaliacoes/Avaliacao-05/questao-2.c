#include <stdio.h>

int main() {
    char nameArquivo[100];
    FILE *arquive;
    int contLinhas = 0;
    char caracter;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nameArquivo);

    arquive = fopen(nameArquivo, "r");

     while ((caracter = fgetc(arquive)) != EOF) {
        if (caracter == '\n') {
            contLinhas++;
        }
    }
    
    if (arquive == NULL) {
        printf("Error the arquive is can't open.\n");
        return 1;
    }
    
   
    
    printf("O arquivo possui %d linhas.\n", contLinhas);

    fclose(arquive);

    return 0;
}