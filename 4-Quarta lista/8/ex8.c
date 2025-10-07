// Crie uma sub-rotina que receba como parâmetro a altura e o sexo de uma pessoa e
// retorne o seu peso ideal. Para homens: peso ideal = 72.7 * altura – 58; Para mulheres:
// peso ideal: 62.1 * altura – 44.7.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double peso(double altura, char mf){

    char maiuscula = toupper(mf);
    double pesoIdeal = 0;


    switch (maiuscula)
    {
    case 'H':
        pesoIdeal = 72.7 * altura - 58;
        break;

        case 'M':
        pesoIdeal = 62.1 * altura - 44.7;
        break;
    
    default:
    printf("\nLetra invalida\n");
        break;
    }

    return pesoIdeal;

}


int main(){

    double altura;
    char mf;
    double resultado;

    printf("\n Digite aqui sua altura: ");
    scanf("%lf", &altura);

    printf("\n Digite seu sexo H para homem e M para mulher: ");
    scanf(" %c", &mf); //nao esquecer do espacinho do %C


    resultado = peso(altura, mf);

    printf("Seu peso ideal é de: %.2lf kg\n", resultado);

    return 0;
}