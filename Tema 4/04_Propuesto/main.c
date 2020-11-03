#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EUR_HORA 43.27
#define HORAS_SEMANALES 40
#define PORC_A 10.0
#define PORC_B 20.0
#define LIMITE_IGUALDAD 90.0

int main(void){
    int ordVendidos;
    float precioOrd, cobroOpA, cobroOpB;

    printf("\nIntroduce el precio del ordenador: ");
    scanf("%f", &precioOrd);
    printf("Introduzca el numero de ordenadores vendidos: ");
    scanf("%d", &ordVendidos);

    cobroOpA = (EUR_HORA * HORAS_SEMANALES) + (ordVendidos * (precioOrd / 100) * PORC_A);
    cobroOpB = ordVendidos * (precioOrd / 100) * PORC_B;

    if(fabs(cobroOpA - cobroOpB) < LIMITE_IGUALDAD){
        printf("\nIgual de ventajosas.");
        printf("\nCobro A: %.2f", cobroOpA);
        printf("\nCobro B: %.2f", cobroOpB);
        printf("\nDiferencia: %.2f", fabs(cobroOpA - cobroOpB));
    } else {
        if(cobroOpA < cobroOpB){
            printf("\nOpcion B");
            printf("\nCobro A: %.2f", cobroOpA);
            printf("\nCobro B: %.2f", cobroOpB);
            printf("\nDiferencia: %.2f", cobroOpB - cobroOpA);
        } else {
            printf("\nOpcion A");
            printf("\nCobro A: %.2f", cobroOpA);
            printf("\nCobro B: %.2f", cobroOpB);
            printf("\nDiferencia: %.2f", cobroOpA - cobroOpB);
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}
