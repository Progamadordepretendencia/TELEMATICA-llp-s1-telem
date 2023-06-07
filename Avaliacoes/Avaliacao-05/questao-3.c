#include <stdio.h>
#include <ctype.h>

int main() {
    char nameArquivo[100];
    FILE *arquive;
    int contVogais = 0;
    char caracter;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nameArquivo);

    arquive = fopen(nameArquivo, "r");
    
    if (arquive == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caracter = fgetc(arquive)) != EOF) {
        caracter = tolower(caracter); 
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contVogais++;
        }
    }
    
    printf("O arquivo possui %d vogais.\n", contVogais);

    fclose(arquive);

    return 0;
}