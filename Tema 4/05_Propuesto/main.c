/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float x;

    puts("Valor de f(x)");
    puts("==============================");
    puts("ln(x)           si 2 <= x <= 5");
    puts("e^(x+1)         si -1 <= x < 2");
    puts("(x^2)-x         si x > 5");
    puts("(x^2)-(x^3)     si x < -1");

    printf("\n\nIntroduce un valor de x: ");
    scanf("%f", &x);

    if((x >= 2) && (x <= 5)){
        printf("\nValor de f(x): %f", log(x));
    } else if((x >= -1) && (x < 2)){
        printf("\nValor de f(x): %f", exp(x+1));
    } else if(x > 5){
        printf("\nValor de f(x): %f", pow(x,2)-x);
    } else if(x < -1){
        printf("\nValor de f(x): %f", pow(x,2)-pow(x,3));
    }

    printf("\n\n");
    system("pause");
    return 0;
}