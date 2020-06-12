/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int opcion;
    float vIni, dep, anios, denom, aniosSDA, vIniSDA;

    do{
        system("cls");
        puts("Depreciacion de un objeto");
        puts("=========================");
        puts("El programa calcula la depreciacion de un objeto por los metodos");
        puts("\t- Metodo de la linea recta (LR)");
        puts("\t- Metodo del balance de doble declinacion (DD)");
        printf("\t- Metodo de la suma de los digitos de los a%cos (SDA)", 164);

        printf("\n\nMetodo (1-LR; 2-DD; 3-SDA; 0-Salir)? ");
        scanf("%d", &opcion);
        fflush(stdin);
        if(opcion == 1 || opcion == 2 || opcion == 3){ 
            printf("Valor original del objeto? ");
            scanf("%f", &vIni);
            fflush(stdin);
            printf("A%cos de depreciacion del objeto? ", 164);
            scanf("%f", &anios);
            fflush(stdin);
        }

        switch(opcion){
            case 1:     /* LINEA RECTA */
                dep = vIni / anios;
                printf("\n\nMetodo de la linea recta");
                printf("\n========================");
                printf("\nA%co  Valor inicial  Depreciacion  Valor residual", 164);
                printf("\n---  -------------  ------------  --------------");
                for(int i = 0; i < anios; i++){
                    printf("\n%3d%15.2f%14.2f%16.2f", i+1, vIni, dep, vIni-dep);
                    vIni = vIni-dep;
                }
                break;

            case 2:     /* BALANCE DOBLE DECLINACION */
                printf("\n\nMetodo del balance de doble declinacion");
                printf("\n=======================================");
                printf("\nA%co  Valor inicial  Depreciacion  Valor residual", 164);
                printf("\n---  -------------  ------------  --------------");
                for(int i = 0; i < anios; i++){
                    dep = (2.00 / anios) * vIni;
                    printf("\n%3d%15.2f%14.2f%16.2f", i+1, vIni, dep, vIni-dep);
                    vIni = vIni-dep;
                }
                break;

            case 3:     /* SUMA DE LOS DIGITOS */
                aniosSDA = anios;
                vIniSDA = vIni;
                for(float i = i; i <= anios; i++) denom += i;
                printf("%f", denom);
                printf("\n\nMetodo de la suma de los digitos de los a%cos", 164);
                printf("\n============================================");
                printf("\nA%co  Valor inicial  Depreciacion  Valor residual", 164);
                printf("\n---  -------------  ------------  --------------");
                for(int i = 0; i < anios; i++){
                    dep = (aniosSDA-- / denom) * vIniSDA;
                    printf("\n%3d%15.2f%14.2f%16.2f", i+1, vIni, dep, vIni-dep);
                    vIni = vIni-dep;
                }
                break;

            default: 
                puts("Introduce una opcion valida");
                break;

            case 0:
                printf("\nSaliendo...");
        }
        printf("\nPulse enter...");
        getchar();
    }while(opcion != 0);

    printf("\n");
    return 0;
}