/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int anio, mes, dia;
    long int fecha;
    int temp;
    int millar, centenas, decenas, unidades;

    printf("NUMERO DEL TAROT\n");
    printf("================\n");
    printf("\nIntroduce tu fecha de nacimiento (AAAAMMDD): ");
    scanf("%d", &fecha);

    /* 
     *  EJEMPLO
     *  -------
     *  Fecha: 19701017
     *  Calculos: 17 + 10 + 1970 = 1997 -> 1 + 9 + 9 + 7 = 26 -> 2 + 6 = 8
     *  Numero Tarot: 8
     */


    /* CALCULOS */
    anio = fecha / 10000;
    mes = (fecha - (anio * 10000)) / 100;
    dia = (fecha - (anio * 10000) - (mes * 100));

    temp = dia + mes + anio;

    millar   = (temp / 1000);
    centenas = (temp - (millar * 1000)) / 100;
    decenas  = (temp - (millar * 1000 + centenas * 100)) / 10;
    unidades = (temp - (millar * 1000 + centenas * 100 + decenas * 10));

    temp = millar + centenas + decenas + unidades;

    decenas = temp / 10;
    unidades = temp - (decenas * 10);

    temp = decenas + unidades;


    /* RESULTADO */
    printf("\nSu numero del TAROT es... %d", temp);

    printf("\n\n");
    system("pause");
    return 0;
}