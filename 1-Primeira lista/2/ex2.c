#include <stdio.h>

int main(void) {
    
    double n1,n2,n3,soma;
    
    printf("\n digite a nota das 3 provas");
    
    scanf("%lf%lf%lf", &n1,&n2,&n3);

    soma = (n1+n2+n3) / 3;

    printf("\n Sua média da prova é: %.2f", soma);

    return 0;
    
}