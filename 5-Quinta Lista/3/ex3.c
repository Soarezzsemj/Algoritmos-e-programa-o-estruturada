// Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de
// objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total
// de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a
// quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição.

// Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus
// respectivos vetores (ambos com tamanho dez).

// Depois, determine e mostre:
// - um relatório contendo quantidade vendida, valor unitário e valor total de cada objeto.

// Ao final,deverá ser mostrado o valor geral das vendas e o valor da comissão que será paga ao vendedor;
// - a quantidade do objeto mais vendido e sua posição no vetor (não se preocupe com empates.)

#include <stdio.h>
#include <stdlib.h>

void vetores(){

    int vetorprecovenda[10];
    int vetoruquantidadevendida[10];



}





int main() {
    double salario = 545;
    double acrescimo = 0.5;
    double valortotal;




    for (int i  = 0; i < 10; i++) {
        printf("\n Digite o valor da peça:");
    scanf("%i", &vetorprecovenda[i]);
        printf("\n Digite a quantidade vendida: ");
        scanf("%i", &vetoruquantidadevendida[i]);
    }

    for (int i  = 0; i < 10; i++) {
        valortotal += vetoruquantidadevendida[i] * vetorprecovenda[i];
    }
    printf(" \n =================== R E L A T O R I O =================== \n ");
    printf(" O valor total vendido foi de: %.2lf R$ ", valortotal);

    // fazer a parte do valor unitario das peças e o resto




    return 0;
}