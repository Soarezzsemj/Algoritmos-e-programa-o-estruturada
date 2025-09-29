#include <stdio.h>
 
int main(void) {

    float lab = 0;
    float av1 = 0;
    float avf = 0;

    double peso;

    

    printf("\n digite a nota das 3 provas: ");
    scanf("%f%f%f", &lab, &av1, &avf);
    peso = (lab*2 + av1*3 + avf*5) / (2 + 3 + 5);

    if (peso >= 8.00 && peso <= 10.00) {
    printf("\nNota A: %.2f\n", peso);

    } else if (peso >= 7.00 && peso <= 7.99) {
    printf("\nNota B: %.2f\n", peso);
    
    } else if (peso >= 6.00 && peso <= 6.99) {
    printf("\nNota C: %.2f\n", peso);

    } else if (peso >= 5.00 && peso <= 5.99) {
    printf("\nNota D: %.2f\n", peso);

    } else if (peso >= 0.00 && peso <= 4.99) {
    printf("\nNota E: %.2f\n", peso);
    } 
    
    printf("\nMédia: %.2f\n" ,peso);
    return 0;
}