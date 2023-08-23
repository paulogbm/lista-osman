#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {

    struct Pessoa pessoa1;

    printf("Informe o nome: ");
    scanf("%s", pessoa1.nome);

    printf("Informe a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Informe a altura: ");
    scanf("%f", &pessoa1.altura);

    printf("Dados da Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    return 0;
}

