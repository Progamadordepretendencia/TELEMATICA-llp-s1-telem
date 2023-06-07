#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Error creating/open arquive.\n");
        return 1;
    }

    printf("Digite os caracteres que serão gravados no arquivo :\n");
    printf("ao pressionar 0 o código será encerrado: \n");

    while ((caractere = getchar()) != '0') {
        fputc(caractere, arquivo);
    }

    fclose(arquivo);

    printf("Arquive close with sucess.\n");

    return 0;
}