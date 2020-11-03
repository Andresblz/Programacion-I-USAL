#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(void){
    float volumen, radio;

    printf("Calcular volumen esfera\n");

    printf("Introduce el radio: ");
    scanf("%f", &radio);

    volumen = ((4 * PI)/3 * pow(radio,3));

    printf("\n\nVolumen: %.4f", volumen);

    printf("\n");
    system("pause");
    return 0;
}
