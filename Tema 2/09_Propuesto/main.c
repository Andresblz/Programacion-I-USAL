/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void){
    float radio, altura;
    float areaLateral, volumen;
    float perimetroBase, areaBase;

    printf("Calculo del area lateral y volumen del cilindro\n");

    printf("Introduce radio: ");
    scanf("%f", &radio);

    printf("Introduce altura: ");
    scanf("%f", &altura);

    perimetroBase = (2 * PI) * radio;
    areaLateral = perimetroBase * altura;
    areaBase = PI * (radio * radio);
    volumen = areaBase * altura;

    printf("Area lateral: %.2f", areaLateral);
    printf("\nVolumen: %.2f", volumen);

    printf("\n");
    system("pause");
    return 0;
}