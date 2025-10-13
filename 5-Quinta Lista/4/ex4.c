// Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois
// vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o segundo
// deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito posições, que
// poderão não ser completamente utilizados

#include <stdio.h>
#include <stdlib.h>

int main() {
    int entrada [8];
    int valornegativo [8];
    int valorpositivo [8];

    int cont_pos = 0 ;
    int cont_neg = 0 ;



    printf("Digite aqui os valores");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &entrada[i]);


        if ( entrada[i] > 0 ) {
            valorpositivo[cont_pos] = entrada[i];
            cont_pos++;
        } else if ( entrada[i] < 0 ) {
            valornegativo[cont_neg] = entrada[i];
            cont_neg++;
        }
    }

    printf("\n--- Numeros positivos: ");
    if (cont_pos == 0) {
        printf("Nenhum");
    } else {
        for (int i = 0; i < cont_pos; i++) {
            printf("%d ", valorpositivo[i]);
        }
    }

    printf("\n--- Numeros negativos: ");
    if (cont_neg == 0) {
        printf("Nenhum");
    } else {
        for (int i = 0; i < cont_neg; i++) {
            printf("%d ", valornegativo[i]);
        }
    }

    printf("\n");






    return 0;
}