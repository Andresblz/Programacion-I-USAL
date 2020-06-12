/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float masaInicial, porc, decr, masaFinal, mitad;
    int cont = 0;

    do{
        printf("\nIntroduce la masa inicial: ");
        scanf("%f", &masaInicial);
    }while(masaInicial < 0);

    do{
        printf("\nIntroduce el porcentaje de desintegracion diario: ");
        scanf("%f", &porc);
    }while(porc < 0 || porc > 100);

    mitad = masaInicial / 2;

    printf("Dia  Masa inicial  Decremento  Masa final\n");
    while(masaInicial > mitad){
        cont++;
        decr = masaInicial * (porc / 100);
        masaFinal = masaInicial - decr;

        printf("%3d%14.4f%12.4f%12.4f\n", cont, masaInicial, decr, masaFinal);

        masaInicial = masaFinal;
    }
    printf("La masa disminuye a menos de la mitad de su valor inicial en %d dias", cont);

    printf("\n");
    system("pause");
    return 0;
}