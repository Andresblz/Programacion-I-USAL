/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int factor1, factor2;
    int unidad, decena, centena;

    do{
        printf("Introduce el primer valor (hasta 3 cifras): ");
        scanf("%d", &factor1);
    }while(factor1 < 0 || factor1 > 999);

    do{
        printf("Introduce el segundo valor (hasta 3 cifras): ");
        scanf("%d", &factor2);
    }while(factor2 < 0 || factor2 > 999);


    centena = factor2 / 100;
    decena = (factor2 - (centena * 100)) / 10;
    unidad = (factor2 - (centena * 100 + decena * 10));


    printf("    %d  \n", factor1);
    printf(" x  %d  \n", factor2);
    printf("--------\n");
    printf("    %d  \n", (unidad * factor1));
    printf("   %d   \n", (decena * factor1));
    printf("  %d    \n", (centena * factor1));
    printf("--------\n");
    printf(" %d     \n", (factor1 * factor2));

    printf("\n\n");
    system("pause");
    return 0;
}