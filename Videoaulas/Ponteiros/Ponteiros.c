#include <stdio.h>
#include <stdlib.h>

int main() {
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("conteudo da var: %d\n", var);
    printf("endereco da var: %p\n", &var);
    printf("conteudo apontado por ptr: %d\n", *ptr);
    printf("endereco apontado por ptr: %p\n", &ptr);

    *ptr = 100;
    printf("\n\n");
    printf("conteudo da var: %d\n", var);
    printf("endereco da var: %p\n", &var);
    printf("conteudo apontado por ptr: %d\n", *ptr);
    printf("endereco apontado por ptr: %p\n", &ptr);


    printf("\n\nEnd.");
    while (1);
    return 0;
}