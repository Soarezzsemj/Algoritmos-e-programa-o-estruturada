#include <stdio.h>
#include <stdlib.h>


// Struct e função
// Crie uma struct Retangulo com largura e altura.
// Escreva uma função que receba um Retangulo e retorne a área.
// No main(), leia os valores e mostre o resultado da função

struct Retangulo {
    float altura;
    float largura;
};

typedef struct Retangulo retangulo;

float area(retangulo r) {

    return r.altura * r.largura;

}

int main() {
    retangulo r;

    printf("Digite a altura do retangulo: ");
    scanf("%f", &r.altura);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &r.largura);

    float resultado = area(r);

    printf("a area do retangulo é de: %.2f", resultado);

return 0;
}