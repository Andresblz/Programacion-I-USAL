/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

#define INF -99
#define SUP 99

int main(void){
    float temperatura, 
          cont = 0, 
          media = 0, 
          totPos = 0, 
          totNeg = 0, 
          totCero = 0;

    printf("Introduce un numero menor que -99 o mayor que 99 para salir\n");
    
    printf("Introduce temperatura: ");
    scanf("%f", &temperatura);

    while(temperatura > INF && temperatura < SUP){
        cont += 1;
        media += temperatura;

        if(temperatura > 0) totPos += 1;
        else if (temperatura < 0) totNeg += 1;
        else totCero += 1;

        printf("Introduce temperatura: ");
        scanf("%f", &temperatura);
    }

    media /= cont;

    printf("\nTemperaturas introducidas: %.0f", cont);
    printf("\nMedia: %.2f", media);
    printf("\nPositivas: %.0f", totPos);
    printf("\tNegativas: %.0f", totNeg);
    printf("\tCero: %.0f", totCero);
    


    printf("\n");
    system("pause");
    return 0;
}