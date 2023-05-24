#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void gravarEstrutura(struct Pessoa* pessoa) {
    FILE* arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Nome: %s\n", pessoa->nome);
    fprintf(arquivo, "Idade: %d\n", pessoa->idade);
    fprintf(arquivo, "Altura: %.2f\n", pessoa->altura);

    fclose(arquivo);
}

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura: ");
    scanf("%f", &pessoa.altura);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);

    gravarEstrutura(&pessoa);

    return 0;
}