//Preencha dois vetores de 5 posições cada, e faça a troca de valores entre os vetores, de modo
//que o primeiro vetor receba os valores do segundo vetor e o segundo vetor, receba os valores do
//primeiro vetor. Exiba os vetores antes e após a troca.

#include <stdio.h>
#include <stdlib.h>

int main () {

  int v1 [5];
  int v2 [5];
    int v3 [5];


    printf("digite aqui os valores do primeiro vetor");
    for (int i =0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("digite aqui os valores do segundo vetor");
    for (int i =0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }



    printf("VALORES ANTES DA TROCA");
    for (int i =0; i < 5; i++) {
        printf(" \n VALOR DO VETOR 1 :Numero: %d | Posição: %d\n", v1[i], i);

    }

    for (int i =0; i < 5; i++) {

        printf(" \n VALOR DO VETOR 2 :Numero: %d | Posição: %d\n", v2[i], i);
    }


     for ( int i = 0; i < 5; i++) {
         v3[i] = v1[i];
     }

    printf("VALORES DEPOIS DA TROCA");

    for ( int i = 0; i < 5; i++) {
         v1[i] = v2[i];

         printf(" \n VALOR DO VETOR 1 :Numero: %d | Posição: %d\n", v1[i], i);
     }

     for ( int i = 0; i < 5; i++) {
         v2[i] = v3[i];

        printf(" \n VALOR DO VETOR 2 :Numero: %d | Posição: %d\n", v2[i], i);
     }


    return 0;
}

