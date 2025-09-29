#include <stdio.h>
 
int main(void) {

    float lab = 0;
    float av1 = 0;
    float avf = 0;

    double media;
 
    printf("\n digite a nota das 3 provas: ");
    scanf("%f%f%f", &lab, &av1, &avf);
    media = (lab + av1 + avf ) / 3 ;

    if (media >= 7.00 && media <= 10.00)
    {
        printf("\n Aprovado %.2f\n", media);
    } else if (media >= 3.00 && media <= 6.99)
    {
       printf("\n Exame %.2f\n", media);
    } else if (media >= 0.00 && media <= 2.99)
    {
        printf("\n Reprovado %.2f\n", media);
    }
    
    
    

    printf("\nMédia: %.2f\n" ,media);



    return 0;
}