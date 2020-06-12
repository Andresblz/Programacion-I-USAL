/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    const char blanco = ' ';
    char car;
    int alt;

    printf("Introduce caracter: ");
    scanf("%c", &car);
    printf("Introduce altura: ");
    scanf("%d", &alt);

    for(int i = 0; i < alt; i++){
        for(int j = 0; j < alt-i; j++){
            printf("%c", blanco);
        }
        for(int j = 0; j < i; j++){
            printf("%c", car);
        }
        printf("\n");
    }
    for(int i = 0; i <= alt-1; i++){
        for(int j = 0; j < i; j++){
            printf("%c", blanco);
        }
        for(int j = 0; j < alt-i; j++){
            printf("%c", car);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}