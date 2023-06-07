#include <stdio.h>
#include <ctype.h>

int main() {
    char nameArquivoInt[100];
    char nameArquivoOut[100];
    FILE *arquiveInt;
    FILE *arquiveOut;
    char caracter;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nameArquivoInt);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nameArquivoOut);

    arquiveInt = fopen(nameArquivoInt, "r");
    
    if (arquiveInt == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    arquiveOut = fopen(nameArquivoOut, "w");
    
    if (arquiveOut == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquiveInt);
        return 1;
    }
    
    while ((caracter = fgetc(arquiveInt)) != EOF) {
        caracter = tolower(caracter); 
        
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            fputc('*', arquiveOut);
        } else {
            fputc(caracter, arquiveOut);
        }
    }
    
    printf("Arquivo de saida criado com sucesso.\n");

    fclose(arquiveInt);
    fclose(arquiveOut);

    return 0;
}