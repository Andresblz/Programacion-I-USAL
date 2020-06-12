/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int lim, t1 = 0, t2 = 1, tn;

    puts("Sucesion de Fibonacci.");
    puts("Introduce el limite para el termino a representar.");

    do{
        printf("(Entre 1 y 6000): ");
        scanf("%d", &lim);
    }while(lim < 1 || lim > 6000);

    while(tn <= lim){
        tn = t1 + t2;
        printf("%5d", tn);
        t1 = t2;
        t2 = tn;
    }

    printf("\n");
    system("pause");
    return 0;
}