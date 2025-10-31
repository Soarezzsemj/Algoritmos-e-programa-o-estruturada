#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//crie uma struct produto com os campos nome(string) e preco(float)
//leia três produtos e mostre o nome do produto com o maior preço


struct produto {

    char nome[50];
    float preco;
};

typedef struct produto Produto;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Produto produto[3];

    for (int i = 0; i < 3; i++) {

        printf("digite o preço do produto: \n", i + 1);
        scanf("%f", &produto[i].preco);
        fflush(stdin);
        printf("digite o nome do produto: \n", i + 1);
        scanf("%s", &produto[i].nome);
        fflush(stdin);
    }

    int maisCaro = 0;

    for (int i = 0; i < 3; i++) {
        if (produto[i].preco > produto[maisCaro].preco) {
            maisCaro = i;
        }
    }
    printf("\nO produto mais caro é: %s (R$ %.2f)\n", produto[maisCaro].nome, produto[maisCaro].preco);

    // for (int i = 0; i < 3; i++) {
    //     printf("================= Pessoa %d ================= \n", i + 1);
    //     printf("\tpreço do produto  R$: %.2f \n", produto[i].preco);
    //     printf("\tnome do produto  %.s \n", produto[i].nome);
    // }






    return 0;
}

