// Ponteiro para vetor
// Declare um vetor de 5 números inteiros.
// Use apenas ponteiros para percorrer e imprimir todos os elementos do vetor (sem usar colchetes
// []).

#include <stdio.h>

int main() {
    int numero [5];
    int *ptr;
    ptr = &numero[0];

    for (int i = 0; i < 5; i++) {
        printf("digite o numero[%d]:", i + 1);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 5; i++) {
        printf("Numero %d, Casa -> %d\n", *(ptr + i), i+1);
    }


    return 0;
}
