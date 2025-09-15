#include <stdio.h>
 
int main(void) {

    double a = 0;
    double b = 0;
    double c = 0;
    double menor, meio, maior;
    
    printf("\n digite os 3 numeros ");
    scanf("%lf%lf%lf", &a, &b, &c);

   if (a <= b && a <= c) {
        menor = a;
        if (b <= c) {
            meio = b;
            maior = c;
        } else {
            meio = c;
            maior = b;
        }
    } else if (b <= a && b <= c) {
        menor = b;
        if (a <= c) {
            meio = a;
            maior = c;
        } else {
            meio = c;
            maior = a;
        }
    } else {
        menor = c;
        if (a <= b) {
            meio = a;
            maior = b;
        } else {
            meio = b;
            maior = a;
        }
    }

    printf("Ordem crescente: ", menor, meio, maior);
    


    
    return 0;
}