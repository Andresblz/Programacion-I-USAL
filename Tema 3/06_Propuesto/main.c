/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14156

int main(void){
    int num;
    float rad;

    printf("Calculo del seno y coseno\n");
    printf("=========================\n");
    printf("Introduce el valor de un angulo en grados: ");
    scanf("%d", &num);

    rad = (num * PI) / 180;

    printf("\nAngulo introducido en grados....: %d", num);
    printf("\nValor del angulo en radianes....: %f", rad);
    printf("\nValor del seno..................: %f", sin(rad));
    printf("\nValor del coseno................: %f", cos(rad));

    printf("\n\n");
    system("pause");
    return 0;
}