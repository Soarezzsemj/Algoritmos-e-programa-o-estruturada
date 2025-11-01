#include <stdio.h>
#include <stdlib.h>

struct escola{
 char nome[50];
 float notas[3];

};

typedef struct escola desempenho;

int main() {

    desempenho desempenho_aluno = {"", {0.0, 0.0, 0.0}};



 printf("Digite o nome do aluno: ");
 scanf("%s", desempenho_aluno.nome);
    fflush(stdin);

 for (int i = 0; i < 3; i++) {

     printf("Digite a nota: %d: ", i+1);
   scanf("%f", &desempenho_aluno.notas[i]);
     fflush(stdin);

 }
    float media = (desempenho_aluno.notas[0] + desempenho_aluno.notas[1] + desempenho_aluno.notas[2]) / 3.00;

    printf("aluno: %s\n", desempenho_aluno.nome);
    printf("media: %.2f\n", media);


 return 0;
}



// Média de alunos
// Crie uma struct Aluno com os campos nome (string) e notas[3] (float).
// Leia os dados de um aluno, calcule a média das 3 notas e exiba o resultado