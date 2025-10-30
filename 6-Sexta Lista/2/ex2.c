#include <stdio.h>
#include <stdlib.h>

struct produto {

    char nome[50];
    float preco;
};

typedef struct produto Produto;

int main() {

    Produto produto = {".", 00.00};

    for (int i = 0; i < 3; i++) {

        printf("digite o preço do produto: \n", i + 1);
        scanf("%f", &produto.preco);
        printf("digite o nome do produto: \n", i + 1);
        scanf("%s", produto.nome);
    }





    return 0;
}
