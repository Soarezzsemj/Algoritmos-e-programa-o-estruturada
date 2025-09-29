//Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
// calcule e mostre o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main(void){

    double deposito;
    double taxaDeJuros;
    double rendimento;
    double total;


    printf("\n Digite o valor do seu deposito: ");
    scanf("%lf", &deposito);

    printf("\n Digite o valor da taxa de juros: ");
    scanf("%lf", &taxaDeJuros);


    rendimento = (deposito * (taxaDeJuros/100));

    total = (deposito + rendimento);

    printf("O seu rendimento foi de: %.2lf", total );






    return 0;
}