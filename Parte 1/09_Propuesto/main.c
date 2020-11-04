#include <stdio.h>
#include <stdlib.h>
#include <math.h>   /* pow() | sqrt() */
#define MAX 100

int main(void){

    /* VARIABLES */
    int dim;
    float vect[MAX],
          desviaciones[MAX],
          desvcuadrado[MAX],
          suma = 0, 
          media, 
          varianza,
          desvestandar;

    puts("==========================================");
    puts("  MEDIA | VARIANZA | DESVIACIÓN ESTÁNDAR  ");
    puts("==========================================");

    /* INICIO DEL PROGRAMA */
    do{
        printf("Introduzca la dimensión del vector: ");
        scanf("%d", &dim);
    }while(dim < 0 || dim > 100);

    puts("\nA continuación introduce los valores: ");
    for(int i = 0; i < dim; i++){
        printf("V[%d]: ", i+1);
        scanf("%f", &vect[i]);
        suma += vect[i];
    }

    /* CALCULO DE LA MEDIA */
    media = suma / dim;
    suma = 0;

    /* CALCULO DE DESVIACIONES */
    for(int i = 0; i < dim; i++){
        desviaciones[i] = vect[i] - media;
    }

    /* CALCULO DESVIACIONES CUADRADO */
    for(int i = 0; i < dim; i++){
        desvcuadrado[i] = pow(desviaciones[i], 2);
        suma += desvcuadrado[i];
    }

    /* CALCULO VARIANZA */
    varianza = suma / dim;
    suma = 0;

    /* CALCULO DESVIACION ESTANDAR */
    desvestandar = sqrt(varianza);


    /* RESULTADOS */
    puts("\n\n--------------------------------------------------");
    puts("| NÚMEROS | DESVIACIONES | CUADRADO DESVIACIONES |");
    puts("--------------------------------------------------");
    for(int i = 0; i < dim; i++){
        printf("|%9.1f|%14.2f|%23.6f|\n", vect[i], desviaciones[i], desvcuadrado[i]);
    }
    puts("--------------------------------------------------");
    printf("| MEDIA                  |%23.4f|\n", media);
    printf("| VARIANZA               |%23.4f|\n", varianza);
    printf("| DESVIACION ESTANDAR    |%23.4f|\n", desvestandar);
    puts("--------------------------------------------------");


    puts("");
    system("pause");
    return 0;
}
