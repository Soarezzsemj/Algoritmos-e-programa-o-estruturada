#include <stdio.h>

int main(void) {
    
    double numeros[10]; // vetores de 8 posições, basicamente cria 7 gavetas (do 0 ao 7)
    double soma = 0;


    for (int i = 0; i < 10; i++) { // para o inteiro = 0 e o i for menor 8 o i aumenta 1 ( a gnt digitando )
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);   // %lf p double
    }

    // saída
    printf("\n--- Numeros digitados ---\n");
    for (int i = 0; i < 10; i++) {
        printf("numeros[%d] = %.2lf\n", i, numeros[i]);  // %d para o índice, %.2lf p double
    }


    // exemplo: acessando só o terceiro número
    printf("\nO quarto numero digitado foi: %.2lf\n", numeros[4]);


    printf("\n--- Soma dos numeros ---\n");
    for (int i = 0; i < 10; i++) {
        soma += numeros[i];  

        printf("%.2lf\n", soma);
    }

    printf("\n--- Media dos numeros ---\n");
    for (int i = 0; i < 10; i++) {
        soma += numeros[i] / soma;  
        printf("%.2lf\n", soma);
    }

    return 0;
    
}