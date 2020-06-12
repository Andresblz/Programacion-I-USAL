/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, centenas, decenas, unidades;
    char cardinal;

    do{
        printf("Introduce un numero (Entre 1 y 999): ");
        scanf("%d", &num);
    }while(num < 1 || num > 999);

    centenas = (num / 100);
    decenas = (num - (centenas * 100)) / 10;
    unidades = (num - (centenas * 100 + decenas * 10));

    printf("%d", centenas);
    printf("%d", decenas);
    printf("%d", unidades);
    printf("\n\n");


    if(centenas == 0) printf("");
    else if(centenas == 1){
        if(unidades == 0 && decenas == 0) printf("cien");
        else printf("ciento");
    }
    else if(centenas == 2) printf("doscientos");
    else if(centenas == 3) printf("trescientos");
    else if(centenas == 4) printf("cuatrocientos");
    else if(centenas == 5) printf("quinientos");
    else if(centenas == 6) printf("seiscientos");
    else if(centenas == 7) printf("setecientos");
    else if(centenas == 8) printf("ochocientos");
    else if(centenas == 9) printf("novecientos");

    if(decenas == 0){
        if(unidades == 0 && centenas == 0) printf(" cero");
        else if(unidades == 1) printf(" uno");
        else if(unidades == 2) printf(" dos");
        else if(unidades == 3) printf(" tres");
        else if(unidades == 4) printf(" cuatro");
        else if(unidades == 5) printf(" cinco");
        else if(unidades == 6) printf(" seis");
        else if(unidades == 7) printf(" siete");
        else if(unidades == 8) printf(" ocho");
        else if(unidades == 9) printf(" nueve"); 
    }
    else if(decenas == 1 && centenas != 0){
        if(unidades == 0) printf(" diez");
        else if(unidades == 1) printf(" once");
        else if(unidades == 2) printf(" doce");
        else if(unidades == 3) printf(" trece");
        else if(unidades == 4) printf(" catorce");
        else if(unidades == 5) printf(" quince");
        else if(unidades == 6) printf(" dieciseis");
        else if(unidades == 7) printf(" diecisiete");
        else if(unidades == 8) printf(" dieciocho");
        else if(unidades == 9) printf(" diecinueve");  
    } else if(decenas == 2){
        printf(" veint");
        if(unidades == 0) printf("e");
        else if(unidades == 1) printf("iuno");
        else if(unidades == 2) printf("idos");
        else if(unidades == 3) printf("itres");
        else if(unidades == 4) printf("icuatro");
        else if(unidades == 5) printf("icinco");
        else if(unidades == 6) printf("iseis");
        else if(unidades == 7) printf("isiete");
        else if(unidades == 8) printf("iocho");
        else if(unidades == 9) printf("inueve");  
    } 
    else if(decenas == 3) printf(" treinta");
    else if(decenas == 4) printf(" cuarenta");
    else if(decenas == 5) printf(" cincuenta");
    else if(decenas == 6) printf(" sesenta");
    else if(decenas == 7) printf(" setenta");
    else if(decenas == 8) printf(" ochenta");
    else if(decenas == 9) printf(" noventa");

    if(decenas != 0 && decenas != 1 && decenas != 2){
        if(unidades == 0) printf("");
        else if(unidades == 1) printf(" y uno");
        else if(unidades == 2) printf(" y dos");
        else if(unidades == 3) printf(" y tres");
        else if(unidades == 4) printf(" y cuatro");
        else if(unidades == 5) printf(" y cinco");
        else if(unidades == 6) printf(" y seis");
        else if(unidades == 7) printf(" y siete");
        else if(unidades == 8) printf(" y ocho");
        else if(unidades == 9) printf(" y nueve");   
    }

    if(decenas == 1 && centenas == 0){
        if(unidades == 0) printf("diez");
        else if(unidades == 1) printf("once");
        else if(unidades == 2) printf("doce");
        else if(unidades == 3) printf("trece");
        else if(unidades == 4) printf("catorce");
        else if(unidades == 5) printf("quince");
        else if(unidades == 6) printf("dieciseis");
        else if(unidades == 7) printf("diecisiete");
        else if(unidades == 8) printf("dieciocho");
        else if(unidades == 9) printf("diecinueve");  
    }
    

    printf("\n");
    system("pause");
    return 0;
}