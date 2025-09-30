#include <stdio.h>
#include <stdlib.h>


//Faça uma função que receba dois números inteiros e positivos por parâmetro e
//retorne a soma dos N números inteiros existentes entre eles. (2)

int soma_diff(int a, int b){
    int soma = 0, i;

    {
        for(i = a+1; i < b; i++){
            soma = soma + i;
        }
        return soma;
    }

}

int main (){
    
    int a, b;
 printf("Informe dois valores maiores que 0, sendo o primeiro menor que o segundo:\n");
 scanf("%d %d", &a, &b);
 
 if(a>0 && b>0)
 	printf("O resultado da soma eh: %d", soma_diff(a,b));
 else
	printf("Valor invalido!");
 

 return 0;


}