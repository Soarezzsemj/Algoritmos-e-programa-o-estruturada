// 9 Crie uma sub-rotina que receba como parâmetro um vetor de dez elementos inteiros
// positivos e mostre em outro vetor o valor do fatorial de cada elemento do primeiro
// vetor. (13)

#include <stdlib.h>
#include <stdio.h>


int fatorial( int aux){

    int j, fat = 1;
    for( j = aux; j>1; j--){

        fat = fat * j;
    }

    return fat;


}

void calculoVetor(int vet[]){
    int i, fato[10];
    for (i = 0; i<10; i++){
        fato[i] = fatorial(vet[i]);
    }
    for(i = 0; i<10; i++){
         printf("\n%d\n", fato[i]); 
    }
}

int main(){
    int vet[10], i;
    printf("Digite dez valores inteiros :\n");
  for(i = 0;i<10;i++)
    {
      scanf("%d", &vet[i]);
    }
  calculoVetor(vet);
  return 0;
}