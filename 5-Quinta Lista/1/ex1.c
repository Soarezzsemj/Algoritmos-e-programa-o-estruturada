#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ehPrimo(int n) {
 if (n <= 1) return false;
 for (int i = 2; i <= sqrt(n); i++) {
  if (n % i == 0)
   return false;
 }
 return true;
}

int main() {
 int v[9];

 printf("Digite 9 números:\n");
 for (int i = 0; i < 9; i++) {
  scanf("%d", &v[i]);
 }

 printf("Números primos e suas posições:\n");
 for (int i = 0; i < 9; i++) {
  if (ehPrimo(v[i])) {
   printf("Valor: %d | Posição: %d\n", v[i], i);
  }
 }

 return 0;
}