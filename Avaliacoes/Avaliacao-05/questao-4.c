#include <stdio.h>
#include <ctype.h>

int main() {
    char nameArquivo[100];
    FILE *arquive;
    int contVogais = 0;
    int contConsoantes = 0;
    char caracter;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nameArquivo);

    arquive = fopen(nameArquivo, "r");
    
    if (arquive == NULL) {
        printf("Error arquive can't open.\n");
        return 1;
    }
    
    while ((caracter = fgetc(arquive)) != EOF) {
        caracter = tolower(caracter); 
        
        if (isalpha(caracter)) { // Verifica se o caractere é uma letra
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
                contVogais++;
            } else {
                contConsoantes++;
            }
        }
    }
    
    printf("O arquivo possui %d vogais e %d consoantes.\n", contVogais, contConsoantes);

    fclose(arquive);

    return 0;
}