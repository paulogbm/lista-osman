#include <stdio.h>

struct Tipo {
    int valorInteiro;
    float valorFlutuante;
    char letra;
};

int main() {

    struct Tipo meuTipo;

    meuTipo.valorInteiro = 23;
    meuTipo.valorFlutuante = 12.6;
    meuTipo.letra = 'P';

    printf("Valores do Tipo:\n");
    printf("Valor Inteiro: %d\n", meuTipo.valorInteiro);
    printf("Valor Flutuante: %.2f\n", meuTipo.valorFlutuante);
    printf("Letra: %c\n", meuTipo.letra);

    return 0;
}

