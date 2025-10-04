// Elabore um programa contendo uma sub-rotina que receba três notas e uma letra como
// parâmetros. Se a letra for A, então deve ser retornada a média aritmética das notas; se a letra
// for P, então deve ser retornada a média ponderada, com pesos 5, 3 e 2, respectivamente. A
// média calculada deverá ser devolvida ao programa principal para, então, ser mostrada. (7)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float Notas(double n1, double n2, double n3, char letra){

    float result;


    letra = toupper(letra);

    switch (letra)
    {
    case 'A':
        
    result = (n1 + n2 + n3) / (3);
    break;

    case 'P':

    result = (n1 * 5) + (n2 * 3) + (n3 * 2) / (5 + 3 + 2);
    break;
    
    default: 
    printf("\n invalido");
        break;
    }
   
   return result;
}


int main(){
char letra;

double n1,n2,n3;
float resultados;

    printf("\nDigite aqui a primeira nota: ");
    scanf("%lf", &n1);
    
    printf("\nDigite aqui a segunda nota: ");
    scanf("%lf", &n2);

    printf("\nDigite aqui a terceira nota: ");
    scanf("%lf", &n3);

    printf("\n DIGITE P para media ponderada OU A para media aritmetica");
    scanf(" %c", &letra);


    resultados = Notas(n1, n2, n3, letra);

    

    if (letra == 'P')
    {
        printf("\n Media ponderada %.2f", resultados);
    } else if (letra == 'A')
    {
        printf("\n Media aritmetica %.2f", resultados);
    }
    


    return 0;
}