#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área
// = (base * altura)/2.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int base;
    int altura;
    int area;

  printf("digite o valor da base do triangulo: \n");
  scanf("%d",&base);
  printf("digite o valor da altura: \n");
  scanf("%d",&altura);

  area = (base * altura) / 2;

  printf("o resultado da area é de: %d\n", area);



    return 0;
}