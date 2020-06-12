/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    const char blanco = ' ';
    char carInt, carExt;
    int alt;

    printf("Introduzca caracter interior: ");
    scanf("%c", &carInt);
    fflush(stdin);
    printf("Introduzca caracter exterior: ");
    scanf("%c", &carExt);
    fflush(stdin);
    printf("Introduzca la altura: ");
    scanf("%d", &alt);
    fflush(stdin);


    /* PRIMER DIAMANTE */
    for(int i = 1; i <= alt; i++){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", blanco);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", carInt);
        }
        printf("\n");
    }
    for(int i = alt; i > 1; i--){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", blanco);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", carInt);
        }
        printf("\n");
    }

    printf("\nPulse enter...");
    getchar();
    printf("\n\n");


    /* SEGUNDO DIAMANTE */
    for(int i = 1; i <= alt; i++){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", blanco);
        }
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        printf("\n");
    }
    for(int i = alt; i > 0; i--){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", blanco);
        }
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        printf("\n");
    }

    printf("\nPulse enter...");
    getchar();
    printf("\n\n");


    /* TERCER DIAMANTE */
    for(int i = 1; i <= alt; i++){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", carInt);
        }
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        printf("\n");
    }
    for(int i = alt; i > 0; i--){
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        for(int j = 1; j < 2*i-1; j++){
            printf("%c", carInt);
        }
        for(int j = 0; j <= alt-i; j++){
            printf("%c", carExt);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}