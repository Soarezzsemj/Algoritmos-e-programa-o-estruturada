// Soma via ponteiro
// Escreva uma função somar(int *a, int *b, int *resultado) que armazene em resultado a soma de *a e
// *b.
// No main(), leia dois números, chame a função e exiba o resultado.

#include <stdio.h>
#include <stdlib.h>

void somar(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

int main() {

    int a, b;
    int resultado;

    printf("digite o valor de A:");
    scanf("%d", &a);
    printf("digite o valor de B:");
    scanf("%d", &b);

    somar(&a, &b, &resultado);


    printf("O resultado da soma: %d\n", resultado);


    return 0;
}