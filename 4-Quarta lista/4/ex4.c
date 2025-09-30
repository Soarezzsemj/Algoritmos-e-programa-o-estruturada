// Faça uma função que receba um único valor representando segundos. Essa função deverá
// convertê-lo para horas, minutos e segundos. Os segundos devem ser passados como parâmetro.
// (4)

#include <stdio.h>
#include <stdlib.h>

void Calculo(int sec){
    
    int hora,min,aux;
    hora = sec/3600;
    min = sec%3600; // é o resto 
    aux = min;
    min = min / 60;
    sec = aux % 60;

    printf("horas:%d Minutos:%d Segundos:%d", hora, min, sec);

}

int main(){

    int sec;
    printf("digite os segundos");
    scanf("%d", &sec);
    Calculo(sec);
    
    return 0;
}

