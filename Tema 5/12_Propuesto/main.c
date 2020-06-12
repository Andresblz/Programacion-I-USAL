/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int dim;
    float num;
    float mediaA = 0, mediaC = 0, mediaG = 1;

    printf("Introduce dimension: ");
    scanf("%d", &dim);

    for(int i = 0; i < dim; i++){
        do{
            printf("Numero? ");
            scanf("%f", &num);
        }while(num < 0);

        mediaA += num;
        mediaG *= num;
        mediaC = mediaC + (num * num);
    }

    mediaA /= dim;
    mediaG = pow(mediaG, 1.0/dim);
    
    mediaC /= dim;
    mediaC = sqrt(mediaC);

    printf("\nMedia Aritmetica: %.2f", mediaA);
    printf("\nMedia Geometrica: %.2f", mediaG);
    printf("\nMedia Cuadratica: %.2f", mediaC);

    printf("\n");
    system("pause");
    return 0;
}