// Troca de valores
// Escreva uma função trocar(int *x, int *y) que troque os valores de duas variáveis inteiras usando
// ponteiros.
// No main(), teste com dois inteiros.

#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int*y) {

    int temporaria = *x;
    *x = *y;
    *y = temporaria;
}

int main() {


    int x,y;

    printf("Insira o valor de X: ");
    scanf("%d",&x);
    printf("Insira o valor de Y: ");
    scanf("%d",&y);

    troca(&x, &y);

    printf("\nApós a troca:\n");
    printf("X = %d\n", x);
    printf("Y = %d\n", y);




    return 0;
}