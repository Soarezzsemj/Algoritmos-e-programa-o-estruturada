// Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo N e retorne o valor
//de S, obtido pelo seguinte cálculo: (10)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>




double calculo(double N){

    double E = 2.0;
    double fatorial = 1.0;

    for( int i=2; i <= N; i++ ){

     fatorial = fatorial * i;

     E = E + (1.0 / fatorial);


    }


    return E;
    
}


int main (){

    double N;
    int E;
    double fatorial;

    double resultado; 

    printf("/nDigite aqui o numero");
    scanf("%lf", &N);



    resultado = calculo(N);

    printf("\n seu resultado %.6lf", resultado);


    return 0;
}