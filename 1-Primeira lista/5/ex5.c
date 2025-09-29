// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário

#include <stdio.h>

int main(void){

    double salario;
    double aumento;
    double numero_aumento;
    double salario_novo;

    printf("\nDigite aqui seu salario: ");
    scanf("%lf", &salario );
    printf("\nDigite aqui a sua porcentagem de aumento: ");
    scanf("%lf", &numero_aumento );

     

    aumento = ( numero_aumento / 100 * salario );

    salario_novo = ( aumento + salario );

    printf("\n seu aumento: %.2lf", aumento);

    printf("\n salario com o aumento: %.2lf", salario_novo);


    return 0;
}