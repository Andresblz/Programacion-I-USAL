/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int h1, m1, s1; /* Primer  corredor        */
    int h2, m2, s2; /* Segundo corredor        */
    int tiempo1, tiempo2, temp, diferencia;
    int hf, mf, sf; /* Tiempo entre corredores */

    printf("Distancia en tiempo entre dos corredores\n");
    printf("========================================\n");
    printf("Introduza el tiempo del primer corredor:\n");
    printf("Horas.....: ");
    scanf("%d", &h1);
    printf("Minutos...: ");
    scanf("%d", &m1);
    printf("Segundos..: ");
    scanf("%d", &s1);
    printf("Introduzca el tiempo del segundo corredor:\n");
    printf("Horas.....: ");
    scanf("%d", &h2);
    printf("Minutos...: ");
    scanf("%d", &m2);
    printf("Segundos..: ");
    scanf("%d", &s2);

    tiempo1 = h1 * 3600 + m1 * 60 + s1;
    tiempo2 = h2 * 3600 + m2 * 60 + s2;

    if(tiempo1 < tiempo2){
        temp = tiempo1;
        tiempo1 = tiempo2;
        tiempo2 = temp;
    }

    diferencia = tiempo1 - tiempo2;

    sf = diferencia % 60;
    temp = diferencia / 60;
    mf = temp % 60;
    hf = temp / 60;

    printf("\nLa distancia entre ambos corredores es de:");
    printf("\n%d horas, %d minutos y %d segundos", hf, mf, sf);

    printf("\n\n");
    system("pause");
    return 0;
}