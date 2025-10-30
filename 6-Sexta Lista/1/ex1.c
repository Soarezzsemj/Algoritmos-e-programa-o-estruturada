#include <stdio.h>
#include <stdlib.h>



struct pessoa {
    char nome[50];
    int idade;
    float altura;
};

typedef struct pessoa Pessoa;

int main() {
    Pessoa dados_pessoa = {"carlos", 18, 1.83};

    printf("Nome: %s\n", dados_pessoa.nome);
    printf("Idade: %d\n", dados_pessoa.idade);
    printf("Altura: %.2f\n", dados_pessoa.altura);

    return 0;
};