/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define PI 3.1415926

int main(void){
    char opcion;
    float base, altura, radio, a, b, resultado;

    do{
        system("cls");
        printf("============================================================\n");
        printf("                        CALCULO DE AREAS                    \n");
        printf("============================================================\n");
        printf("\ta) De un rectangulo.\n");
        printf("\tb) De un triangulo.\n");
        printf("\tc) De un circulo.\n");
        printf("\td) De un trapecio.\n");
        printf("\ts) Salir.\n");

        printf("\nOpcion? ");
        scanf("%c", &opcion);
        fflush(stdin);
        opcion = toupper(opcion);       // #include <ctype.h> (Convierte a mayusculas la letra introducida)

        switch(opcion){
            case 'A':   /* RECTANGULO */
                printf("\nIntroduce base: ");
                scanf("%f", &base);
                printf("Introduce altura: ");
                scanf("%f", &altura);
                fflush(stdin);

                resultado = base * altura;
                printf("\n\nResultado: %.2f", resultado);
                break;

            case 'B':   /* TRIANGULO */
                printf("\nIntroduce base: ");
                scanf("%f", &base);
                printf("Introduce altura: ");
                scanf("%f", &altura);
                fflush(stdin);

                resultado = (base * altura) / 2;
                printf("\n\nResultado: %.2f", resultado);
                break;

            case 'C':   /* CIRCULO */
                printf("\nIntroduce radio: ");
                scanf("%f", &radio);
                fflush(stdin);

                resultado = PI * pow(radio, 2);
                printf("\n\nResultado: %.2f", resultado);
                break;

            case 'D':   /* TRAPECIO */
                printf("\nIntroduce altura: ");
                scanf("%f", &altura);
                printf("Introduce lado A: ");
                scanf("%f", &a);
                printf("Introduce lado B: ");
                scanf("%f", &b);
                fflush(stdin);

                resultado = ((a + b) * altura) / 2;
                printf("\n\nResultado: %.2f", resultado);
                break;

            case 'S':
                printf("\nSaliendo...");
        }
        printf("\nPulse enter...");
        getchar();
    }while(opcion != 'S');

    printf("\n");
    return 0;
}