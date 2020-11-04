#include <stdio.h>
#include <stdlib.h>
#define DIAS 7
#define MUESTRAS 6

int main(void){


    /* PRUEBA CON CONJUNTO DE DATOS DADO */
    /*
     *  IMPORTANTE
     *  En caso de querer usar otro conjunto de datos,
     *  comente y descomente las variables y codigo
     *  necesario para llevar esto a cabo.
     */

    float temp[DIAS][MUESTRAS] = {{19, 18.5, 19, 20.5, 22, 20.5},
                                  {20, 17, 18.5, 21, 22.5, 19},
                                  {17, 18, 20, 22.5, 20.5, 20},
                                  {18.5, 17, 19, 20.5, 22, 21},
                                  {20.5, 18, 18.5, 21, 20.5, 18},
                                  {17, 19.5, 20, 21.5, 20, 19},
                                  {18, 18.5, 19, 22.5, 20, 21}};

    int horas[MUESTRAS] = {30, 510, 945, 1230, 1855, 2220};

    /* 
     * RESULTADOS OBTENIDOS CON EL CONJUNTO DE DATOS DADO
     * 
     * INFORME TEMPERATURAS POR DIA     INFORME TEMPERATURAS POR HORA
     * ============================     =============================
     * DIA   MAXIMA  MINIMA   MEDIA     HORA    MAXIMA  MINIMA  MEDIA
     *  1     22.00   18.50   19.92     00:30    20.50   17.00  18.57 
     *  2     22.50   17.00   19.67     05:10    19.50   17.00  18.07
     *  3     22.50   17.00   19.67     09:45    20.00   18.50  19.14
     *  4     22.00   17.00   19.67     12:30    22.50   20.50  21.36
     *  5     21.00   18.00   19.42     18:55    22.50   20.00  21.07
     *  6     21.50   17.00   19.50     22:20    21.00   18.00  19.79
     *  7     22.50   18.00   19.83
     * 
     * Temperatura maxima muestras: 22.50
     * Temperatura minima muestras: 17.00
     * Temperatura media  muestras: 19.67
     */

    // float temp[DIAS][MUESTRAS];
    float tmax_dia[DIAS], tmin_dia[DIAS], tmedia_dia[DIAS],
          tmax_muestra[MUESTRAS], tmin_muestra[MUESTRAS], tmedia_muestra[MUESTRAS],
          tmax_total, tmin_total, tmedia_total,
          aux;
    
    // int horas[MUESTRAS];

    puts("==========================================");
    puts("          TERMOSTATO ELECTRONICO          ");
    puts("==========================================");

    /*
    puts("\nHoras del dia de muestreo: ");
    for(int x = 0; x < MUESTRAS; x++){
        printf("HORAS:MINUTOS %2d (HHMM): ", x+1);
        scanf("%d", &horas[x]);
    }

    puts("\nMuestras de temperatura: ");
    for(int d = 0; d < DIAS; d++){
        for(int m = 0; m < MUESTRAS; m++){
            printf("Dia %d [%02d:%02d]: ", d+1, horas[m]/100, horas[m]%100);
            scanf("%f", &temp[d][m]);
        }
    }
    */

    /* CALCULOS */
    // POR DIAS
    for(int d = 0; d < DIAS; d++){
        tmax_dia[d] = temp[d][0];
        tmin_dia[d] = temp[d][0];
        for(int m = 1; m < MUESTRAS; m++){
            if(temp[d][m] > tmax_dia[d])
                tmax_dia[d] = temp[d][m];
            if(temp[d][m] < tmin_dia[d])
                tmin_dia[d] = temp[d][m];
        }
    }

    for(int d = 0; d < DIAS; d++){
        aux = 0;
        for(int m = 0; m < MUESTRAS; m++){
            aux += temp[d][m];
        }
        tmedia_dia[d] = aux / MUESTRAS;
    }

    // POR MUESTRAS
    for(int m = 0; m < MUESTRAS; m++){
        tmax_muestra[m] = temp[0][m];
        tmin_muestra[m] = temp[0][m];
        for(int d = 1; d < DIAS; d++){
            if(temp[d][m] > tmax_muestra[m])
                tmax_muestra[m] = temp[d][m];
            if(temp[d][m] < tmin_muestra[m])
                tmin_muestra[m] = temp[d][m];
        }
    }

    for(int m = 0; m < MUESTRAS; m++){
        aux = 0;
        for(int d = 0; d < DIAS; d++){
            aux += temp[d][m];
        }
        tmedia_muestra[m] = aux / DIAS;
    }

    // TOTAL 
    aux = 0;
    tmax_total = temp[0][0];
    tmin_total = temp[0][0];
    for(int d = 0; d < DIAS; d++){
        for(int m = 0; m < MUESTRAS; m++){
            aux += temp[d][m];
            if(temp[d][m] > tmax_total)
                tmax_total = temp[d][m];
            if(temp[d][m] < tmin_total)
                tmin_total = temp[d][m];
        }
    }
    tmedia_total = aux / (DIAS * MUESTRAS);
    

    /* RESULTADOS */
    puts("\nINFORME TEMPERATURAS POR DIA");
    puts("============================");
    puts("DIA   MAXIMA  MINIMA   MEDIA");
    for(int d = 0; d < DIAS; d++)
        printf("%2d%10.2f%8.2f%8.2f\n", d+1, tmax_dia[d], tmin_dia[d], tmedia_dia[d]);

    puts("\nINFORME TEMPERATURAS POR HORA");
    puts("=============================");
    puts("HORA    MAXIMA  MINIMA  MEDIA");
    for(int m = 0; m < MUESTRAS; m++)
        printf("%02d:%02d%9.2f%8.2f%7.2f\n", horas[m]/100, horas[m]%100, tmax_muestra[m], tmin_muestra[m], tmedia_muestra[m]);

    printf("\nTemperatura máxima muestras: %6.2f", tmax_total);
    printf("\nTemperatura minima muestras: %6.2f", tmin_total);
    printf("\nTemperatura media  muestras: %6.2f", tmedia_total);


    printf("\n");
    system("pause");
    return 0;
}
