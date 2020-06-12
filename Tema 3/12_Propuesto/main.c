/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    float wdmicro, stmicro, ssdmicro;
    float wdbyte, stbyte, ssdbyte;
    int wdunidades, stunidades, ssdunidades;


    puts("COMPARATIVA DE PRECIOS DE DOS ALMACENES");
    puts("=======================================");
    puts("Almacenes de venta de discos: MICROSAN y BYTE DE 9");
    puts("Modelos de discos ofrecidos: WD20EARS, ST2000 y SSD204.");
    puts("");
    puts("Se solicitaran los precios unitarios de cada modelo de HD en cada almacen.");
    puts("Se solicitaran el numero de discos a realizar en el pedido.");
    puts("El programa realizara una tabla comparativa de precios en cada almacen.");

    printf("\n\nIntroduzca datos para el almacen MICROSAN:");
    printf("\nPrecio del modelo  WD20EARS?: ");
    scanf("%f", &wdmicro);
    printf("Precio del modelo    ST2000?: ");
    scanf("%f", &stmicro);
    printf("Precio del modelo    SSD204?: ");
    scanf("%f", &ssdmicro);

    printf("\nIntroduzca datos para el almacen BYTE DE 9:");
    printf("\nPrecio del modelo  WD20EARS?: ");
    scanf("%f", &wdbyte);
    printf("Precio del modelo    ST2000?: ");
    scanf("%f", &stbyte);
    printf("Precio del modelo    SSD204?: ");
    scanf("%f", &ssdbyte);

    printf("\nIntroduzca las unidades a adquirir de cada modelo:");
    printf("\nUnidades del modelo WD20EARS?: ");
    scanf("%d", &wdunidades);
    printf("Unidades del modelo   ST2000?: ");
    scanf("%d", &stunidades);
    printf("Unidades del modelo   SSD204?: ");
    scanf("%d", &ssdunidades);

    printf("\n\nResultados");
    printf("\n----------");
    printf("\n                                            MICROSAN\t              BYTE DE 9 ");
    printf("\n                              -----------------------\t  -----------------------");
    printf("\nTotal discos tipo WD20EARS... %4d * %6.2f = %7.2f\t %4d * %6.2f = %7.2f", wdunidades, wdmicro, wdunidades * wdmicro, wdunidades, wdbyte, wdunidades * wdbyte);
    printf("\nTotal discos tipo   ST2000... %4d * %6.2f = %7.2f\t %4d * %6.2f = %7.2f", stunidades, stmicro, stunidades * stmicro, stunidades, stbyte, stunidades * stbyte);
    printf("\nTotal discos tipo   SSD204... %4d * %6.2f = %7.2f\t %4d * %6.2f = %7.2f", ssdunidades, ssdmicro, ssdunidades * ssdmicro, ssdunidades, ssdbyte, ssdunidades * ssdbyte);
    printf("\n                              -----------------------\t  -----------------------");
    printf("\nTotal compra.................                %4.2f\t                 %4.2f   ", (wdunidades * wdmicro)+(stunidades * stmicro)+(ssdunidades * ssdmicro), (wdunidades * wdbyte)+(stunidades * stbyte)+(ssdunidades * ssdbyte));

    printf("\n\n");
    system("pause");
    return 0;
}