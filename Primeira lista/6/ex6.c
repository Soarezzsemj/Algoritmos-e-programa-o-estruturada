//Faça um programa que receba o salário-base de um funcionário, 
//calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
//salário-base e paga imposto de 7% sobre o salário-base.

#include <stdio.h>

int main(void){

    double salario_base;
    double a_receber;
    double gratificacao = 0.05;
    double desconto;
    double desconto_sal;
    double imposto =  0.07;

    printf("\nDigite aqui seu salario: ");
    scanf("%lf", &salario_base );

    a_receber = ( salario_base * gratificacao + salario_base); 

    desconto = ( a_receber * imposto );

    desconto_sal = ( a_receber - desconto );



    printf("\n seu salario com gratificacao: %.2lf ", a_receber);
    printf("\n seu salario final com o imposto: %.2lf ", desconto_sal);




   
   
   
   
    
    
    return 0;
}