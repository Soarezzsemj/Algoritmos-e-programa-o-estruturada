#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Data date;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    date Data = {0,0,0};

    printf("digite o dia: ");
    scanf("%d", &Data.dia);
    fflush(stdin);
    printf("digite mês: ");
    scanf("%d", &Data.mes);
    fflush(stdin);
    printf("digite o ano: ");
    scanf("%d", &Data.ano);
    fflush(stdin);

    printf("%d / %.2d / %d ", Data.dia, Data.mes, Data.ano);

    return 0;
}


//  Struct com data
// Crie uma struct Data com dia, mes e ano.
// Leia uma data digitada pelo usuário e exiba-a no formato DD/MM/AAAA