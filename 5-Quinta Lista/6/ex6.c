// Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e
// mostre os seguintes vetores resultantes:
// - A união de X com Y (Todos os elementos de X e de Y sem repetições);
// - A diferença entre X e Y (Todos os elementos de X que não existam em Y, sem
// repetições)
// - A soma de X e Y (A soma de cada elemento de X com o elemento da mesma posição em Y);
// - O produto entre X e Y (Multiplicação de cada elemento de X com o elemento de mesma
// posição em Y);
// - A interseção entre X e Y (Apenas os elementos que aparecem nos dois vetores, sem
// repetições).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int VetorX [10];
    int VetorY [10];
    int VetorUniao [20];
    int VetorDiferenca [10];
    int VetorSoma [10];
    int VetorProduto [10];
    int Vetorinter [10];
    int contador = 0;


    // uniao
    for (int i  = 0; i <  10 ; i++ ) {
        VetorUniao [contador] = VetorX[i];
        contador++;

        int verifica = 0;
        int elementos = VetorY [j];

        for (int j = 0; j < 10; j++) {
            if (elementos == VetorX[j]) {
                verifica = 1;
                break;
            }

            if (verifica == 0) {
                VetorUniao [contador] = elementos;
                contador++;
            }

        }



        // soma e produto
        for (int i = 0; i < 0 ; i++) {
            VetorSoma[i] = VetorX[i] + VetorY[i];
            VetorProduto[i] = VetorX[i] * VetorY[i];
        }


        return 0;
    }
}