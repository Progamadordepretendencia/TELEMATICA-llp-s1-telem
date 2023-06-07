#include <stdio.h>
#include <ctype.h>

int main() {
    char nameArquivo[100];
    FILE *arquive;
    int contador[26] = {0}; // Array para contar a ocorrência de cada letra do alfabeto
    char caracter;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nameArquivo);

    arquive = fopen(nameArquivo, "r");
    
    if (arquive == NULL) {
        printf("Error arquive can't open.\n");
        return 1;
    }
    
    while ((caracter = fgetc(arquive)) != EOF) {
        if (isalpha(caracter)) { 
            caracter = tolower(caracter); 
            
            int indice = caracter - 'a'; 
            contador[indice]++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        char letra = i + 'a'; 
        printf("A letra %c ocorre %d vezes.\n", letra, contador[i]);
    }

    fclose(arquive);

    return 0;
}