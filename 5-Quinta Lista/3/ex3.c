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


int main() {
    double salario = 545;
    double acrescimo = 0.5;
    double valortotal;

    int vetorprecovenda[10];
    float vetorprecovenda[10];
    int vetoruquantidadevendida[10];


    for (int i  = 0; i < 10; i++) {
        printf("\n Digite o valor da peça:");
    scanf("%i", &vetorprecovenda[i]);
        printf("\n Digite a quantidade vendida: ");
        scanf("%i", &vetoruquantidadevendida[i]);
    float valortotal = 0;
    float salario = 545.0;
    float comissao;
    int maisvendido = 0;

    // Entrada de dados
    for (int i = 0; i < 10; i++) {
        printf("\nDigite o valor unitário da peça %d: ", i);
        scanf("%f", &vetorprecovenda[i]);
        printf("Digite a quantidade vendida da peça %d: ", i);
        scanf("%d", &vetoruquantidadevendida[i]);
    }

    for (int i  = 0; i < 10; i++) {
        valortotal += vetoruquantidadevendida[i] * vetorprecovenda[i];
    // Relatório
    printf("\n========== RELATÓRIO ==========\n");
    printf("Peca | Quantidade | Valor Unitario | Valor Total\n");
    for (int i = 0; i < 10; i++) {
        float valtotalpeca = vetorprecovenda[i] * vetoruquantidadevendida[i];
        printf("%4d | %10d | %13.2f | %11.2f\n", i, vetoruquantidadevendida[i], vetorprecovenda[i], valtotalpeca);
        valortotal += valtotalpeca;
        // Verifica o mais vendido
        if (vetoruquantidadevendida[i] > vetoruquantidadevendida[maisvendido]) {
            maisvendido = i;
        }
    }
    printf(" \n =================== R E L A T O R I O =================== \n ");
    printf(" O valor total vendido foi de: %.2lf R$ ", valortotal);

    // fazer a parte do valor unitario das peças e o resto


    comissao = valortotal * 0.05;
    printf("\nValor total das vendas: R$ %.2f", valortotal);
    printf("\nComissão do vendedor: R$ %.2f", comissao);
    printf("\nSalário total do vendedor: R$ %.2f", salario + comissao);

    printf("\n\nObjeto mais vendido: %d", maisvendido);
    printf("\nQuantidade vendida do objeto mais vendido: %d\n", vetoruquantidadevendida[maisvendido]);

    return 0;
}
}