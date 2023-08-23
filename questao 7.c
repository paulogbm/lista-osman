#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char nomeTitular[50];
    int numeroConta;
    float saldo;
} ContaBancaria;

ContaBancaria criarConta(const char nome[], int numeroConta, float saldoInicial) {
    ContaBancaria conta;
    strcpy(conta.nomeTitular, nome);
    conta.numeroConta = numeroConta;
    conta.saldo = saldoInicial;
    return conta;
}

void depositar(ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Dep�sito de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor inv�lido para dep�sito.\n");
    }
}

bool sacar(ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso.\n", valor);
        return true;
    } else {
        printf("Saldo insuficiente ou valor inv�lido para saque.\n");
        return false;
    }
}

float verificarSaldo(ContaBancaria conta) {
    return conta.saldo;
}

int main() {
    ContaBancaria minhaConta = criarConta("Jo�o Silva", 12345, 1000.0);
    
    printf("Saldo inicial: %.2f\n", verificarSaldo(minhaConta));
    
    depositar(&minhaConta, 500.0);
    printf("Saldo ap�s dep�sito: %.2f\n", verificarSaldo(minhaConta));
    
    sacar(&minhaConta, 200.0);
    printf("Saldo ap�s saque: %.2f\n", verificarSaldo(minhaConta));
    
    return 0;
}

