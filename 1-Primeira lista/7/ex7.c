//Faça um programa que receba o salário-base de um funcionário, calcule e
//mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
//50,00 e paga imposto de 10% sobre o salário-base.

#include <stdio.h>

int main (void){

    double salario_base;
    double salario_bonifica;
    double salario_final;
    double salario_print;
    double gratificacao = 50;
    double imposto = 0.10 ;

     printf("\nDigite aqui seu salario: ");
    scanf("%lf", &salario_base );

    salario_bonifica = (salario_base + gratificacao);
    salario_final = (salario_bonifica * imposto);
    salario_print =  ( salario_bonifica - salario_final);

    printf("\nseu salario a receber: %.2lf ", salario_print);  
    





    return 0;
}