// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
#include <stdio.h>

int main (void){

        double salario;
        double aumento; 
        double salario_novo;

    printf("digite aqui seu salario\n");
    scanf("%lf", &salario);

    aumento = (salario * 0.25);

    salario_novo = ( aumento + salario);

    printf("Seu salario aumentou para: %.2f\n", salario_novo);

    return 0;
    
}