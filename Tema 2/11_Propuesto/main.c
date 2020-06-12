/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, y, temp;

    printf("Intercambio de valores\n");

    printf("Introduce x: ");
    scanf("%d", &x);
    printf("Introduce y: ");
    scanf("%d", &y);

    printf("Valores Iniciales:");
    printf("\n\tx = %d", x);
    printf("\n\ty = %d", y);

    temp = x;
    x = y;
    y = temp;

    printf("\n\nDespues de intercambiar:");
    printf("\n\tx = %d", x);
    printf("\n\ty = %d", y);

    printf("\n");
    system("pause");
    return 0;
}