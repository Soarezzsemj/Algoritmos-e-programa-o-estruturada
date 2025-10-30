#include <stdio.h>
#include <string.h>
#define TAM 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa TipoPessoa;

int main() {
    TipoPessoa pes = {0, 0.0, "teste"};

        printf("Inicio: \n");
        printf("pes.idade %d\n ", pes.idade);
        printf("pes.peso %.2f\n ", pes.peso);
        printf("pes.nome %s\n", pes.nome);

    // colocando os valores nos campos
    pes.idade = 20;
    pes.peso = 79.3;
    strcpy(pes.nome, "John");
    // o strcpy é para atribuir a string de char

    printf("\nAlterando os campos via código: \n");
    printf("pes.idade %d\n", pes.idade);
    printf("pes.peso %.2f\n", pes.peso);
    printf("pes.nome %s\n", pes.nome);




    printf("\nAlterando os campos via usuario: \n");

    printf("insira sua idade:\n", pes.idade);
    scanf("%d", &pes.idade);

    printf("insira seu peso:\n", pes.peso);
    scanf("%f", &pes.peso);
    fflush(stdin);// LIMPAR O BUFFER DO TECLADO

    printf("insira seu nome:\n", pes.nome);
    scanf("%s", &pes.nome);

    printf("\nAlterado via usuario: \n");
    printf("pes.idade %d\n", pes.idade);
    printf("pes.peso %.2f\n", pes.peso);
    printf("pes.nome %s\n", pes.nome);

    return 0;
}