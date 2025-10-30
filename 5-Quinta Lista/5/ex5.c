// Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o
// vetor resultante da intercalação.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int VetorA [10];
    int VetorB [10];
    int VetorResultante [20];

    printf("digite os valores do primeiro vetor aqui: ");
    for (int i = 0; i < 10; i++) {
        printf("valor -> %d : ", i);
    scanf("%d",&VetorA[i]);
    }

    printf("digite os valores do segundo vetor aqui: ");
    for (int i = 0; i < 10; i++) {
        printf("valor -> %d : ", i);
        scanf("%d",&VetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        VetorResultante[i * 2] = VetorA[i];
        VetorResultante [2 * i + 1] = VetorB[i];

    }

    for (int i = 0; i < 20; i++) {
        // printf("O valor resultante -> %d \n", VetorResultante[i]);

        if ( i % 2 == 0) {
            printf("O valor resultante da Casa -> %.2d é o Vetor A %d \n",i , VetorResultante[i]);
        } else {
            printf("O valor resultante da Casa -> %.2d é o Vetor B %d \n",i , VetorResultante[i]);
        }


    }




    return 0;
}