/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUP 10
#define INF 0

int main(void){
    float nota, media, cont = 0;
    char final[15];
    int sob = 0,
        not = 0,
        apr = 0,
        sus = 0,
        msus = 0;

    printf("Introduce nota (nota negativa para salir): ");
    scanf("%f", &nota);
    while(nota > INF){
        if(nota > INF && nota < SUP){
            cont++;
            media += nota;

            if(nota >= 9) sob++;
            else if(nota >= 7 && nota < 9) not++;
            else if(nota >= 5 && nota < 7) apr++;
            else if(nota >= 2 && nota < 5) sus++;
            else if(nota < 2) msus++;
        }        

        printf("Introduce nota (nota negativa para salir): ");
        scanf("%f", &nota);
    }

    media /= cont;

    if(media > 5) strcpy(final, "Aprobado");
    else strcpy(final, "Suspenso");

    printf("\nTotal alumnos presentados a examen.: %4.0f", cont);
    printf("\nNumero de sobresalientes...........: %4d (%6.2f%c)", sob, (sob / cont) * 100, 37);
    printf("\nNumero de notables.................: %4d (%6.2f%c)", not, (not / cont) * 100, 37);
    printf("\nNumero de aprobados................: %4d (%6.2f%c)", apr, (apr / cont) * 100, 37);
    printf("\nNumero de suspensos................: %4d (%6.2f%c)", sus, (sus / cont) * 100, 37);
    printf("\nNumero de muy deficientes..........: %4d (%6.2f%c)", msus, (msus / cont) * 100, 37);
    printf("\nNota media.........................: %4.2f (%s)", media, final);

    printf("\n");
    system("pause");
    return 0;
}