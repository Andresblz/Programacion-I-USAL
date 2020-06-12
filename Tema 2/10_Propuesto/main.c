/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void){
    int grados;
    float radianes;

    printf("Conversor grados a radianes\n");

    printf("Introduce valor grados: ");
    scanf("%d", &grados);

    radianes = (PI * grados) / 180;

    printf("\n\nRadianes: %.4f", radianes);

    printf("\n");
    system("pause");
    return 0;
}