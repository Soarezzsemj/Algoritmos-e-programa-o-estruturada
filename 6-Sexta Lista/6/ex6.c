 // Declare uma variável int a = 5 e um ponteiro p que aponte para a.
 // Exiba:- o valor de a,- o endereço de a,- o conteúdo de p,- e o valor apontado por p

#include <stdio.h>
#include <stdlib.h>

int main() {
 int a = 5;
 int *ptr;
 ptr = &a;

 printf("conteudo da var: %d\n", a);
 printf("endereco da var: %p\n", &a);
 printf("conteudo apontado por ptr: %d\n", *ptr);
 printf("endereco apontado por ptr: %p\n", &ptr);


}
