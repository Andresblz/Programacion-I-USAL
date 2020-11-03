#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float cuota;
    float capital, interes, interesMensual;
    int plazo;

    printf("Introduzca el capital: ");
    scanf("%f", &capital);
    printf("Interes anual: ");
    scanf("%f", &interes);
    printf("Plazo en años: ");
    scanf("%d", &plazo);

    interesMensual = interes / 12;
    plazo = plazo * 12;

    cuota = (capital * interesMensual) / (100 * (1 - pow(1+(interesMensual/100),-plazo)));

    printf("Cuota: %.2f", cuota);

    printf("\n\n");
    system("pause");
    return 0;
}
