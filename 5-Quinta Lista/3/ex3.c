#include <stdio.h>

int main() {
    float vetorprecovenda[10];
    int vetoruquantidadevendida[10];
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

    comissao = valortotal * 0.05;
    printf("\nValor total das vendas: R$ %.2f", valortotal);
    printf("\nComissão do vendedor: R$ %.2f", comissao);
    printf("\nSalário total do vendedor: R$ %.2f", salario + comissao);

    printf("\n\nObjeto mais vendido: %d", maisvendido);
    printf("\nQuantidade vendida do objeto mais vendido: %d\n", vetoruquantidadevendida[maisvendido]);

    return 0;
}
