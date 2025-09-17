// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
#include <stdio.h>

int main(void){

    double n1, n2, n3, soma;
    double peso1, peso2, peso3;
    

    printf("Digite aqui as suas 3 notas \n");
    scanf("%lf%lf%lf", &n1, &n2, &n3);
    
    printf("Digite aqui os pesos \n");
    scanf("%lf%lf%lf", &peso1,&peso2,&peso3 );


    soma = ( n1*peso1 + n2*peso2 + n3*peso3 ) / (peso1 + peso2 + peso3);

    printf("\n o resultado da sua media ponderada: %.2f", soma);
    
    
    




    return 0;
}