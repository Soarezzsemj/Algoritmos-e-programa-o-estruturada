#include <stdio.h>

int main(void) {
    
    double n1,n2,n3,n4,soma;
    
    printf("\n digite os seus 4 numeros aqui");
    
    scanf("%lf%lf%lf%lf", &n1,&n2,&n3,&n4 );

    soma = (n1+n2+n3+n4);

    printf("\n Soma aqui %.2lf", soma);

    return 0;
    
}