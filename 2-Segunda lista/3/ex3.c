#include <stdio.h>
 
int main(void) {

    double num1 = 0;
    double num2 = 0;

    printf("\n digite dois numeros ");
    scanf("%lf%lf", &num1, &num2);

    if (num1 > num2)
    {
        printf("\n o maior numero é %.2f\n", num1);
    } else
    {
      printf("\n o maior numero é %.2f\n", num2);  
    }
    
    return 0;
}