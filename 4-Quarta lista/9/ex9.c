// Elabore uma sub-rotina que receba como parâmetro um valor inteiro e positivo N
// (inteiro e maior ou igual a 1) e determine o valor da sequência S, descrita a seguir:
#include <stdio.h>
#include <stdlib.h>


float sequenciaS(int N){
    float S = 0;

    for( int n = 1; n <= N; n++) {
        S += (n*n + 1.0) / (n + 3.0);
    }

    return S;
}

int main(){
    int N;
    float S;
    float resultado;


    printf("\n Digite o valor de N: ");
    scanf("%d", &N);

    resultado = sequenciaS(N);

    printf("\n valor de N => %.2f" , resultado);







    return 0;
}