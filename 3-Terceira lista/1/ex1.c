#include <stdio.h>

int main(void) {
    int anoAtual;
    double salarioinicial = 1000.0; 
    double salario = 1000.0;   
    double aumento = 0.015;    

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    
    salario += salario * aumento;

    
    for (int ano = 2007; ano <= anoAtual; ano++) {
        aumento *= 2; 
        salario += salario * aumento;
    }
    if (anoAtual == 2005 ) {
        printf("R$ %.2f\n ", salario);
    } else if (anoAtual == 2006)
    {
        printf("R$ %.2f\n ", salario * aumento);
    } else {
        printf("Salario inicial R$ %.2f : \n", salarioinicial);
        printf("Salario em %d: R$ %.2f\n", anoAtual, salario);
    }
    
    
    
    

    return 0;
}