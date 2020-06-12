/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRICEMIN 1
#define PRICEMAX 9999
		    
int main(){
	/* Declaración de variables */
	int price;
	char code[5] = "";
	
	int unidad, decena, centena, millar;
	int resto;
	
	/*Borrar pantalla */
	system("cls");
	
	/* Petición de datos */
	printf("\tCODIGO MURCIELAGO\n");
	printf("================================\n");
	printf("Introduzca un precio (hasta 4 cifras): ");
	scanf("%d", &price);
	
	if (price < PRICEMIN || price > PRICEMAX)
		printf("\nEl precio %d introducido no es correcto.", price);
	else {
		/* Descomposición de precio introducido */
		millar  = price / 1000;
		resto   = price % 1000;
		centena = resto / 100;
		resto   = resto % 100;
		decena  = resto / 10;
		unidad  = resto % 10;
		
		/* Traducción Millares */
		switch (millar) {
            case 0 : strcat(code, "O") ; break;     /* strcat -> #include <string.h> */
            case 1 : strcat(code, "G") ; break;
            case 2 : strcat(code, "A") ; break;
            case 3 : strcat(code, "L") ; break;
            case 4 : strcat(code, "E") ; break;
            case 5 : strcat(code, "I") ; break;
            case 6 : strcat(code, "C") ; break;
            case 7 : strcat(code, "R") ; break;
            case 8 : strcat(code, "U") ; break;
            case 9 : strcat(code, "M") ; break;
		}
	
		/* Traducción Centenas */
		switch (centena) {
            case 0 : strcat(code, "O") ; break;
            case 1 : strcat(code, "G") ; break;
            case 2 : strcat(code, "A") ; break;
            case 3 : strcat(code, "L") ; break;
            case 4 : strcat(code, "E") ; break;
            case 5 : strcat(code, "I") ; break;
            case 6 : strcat(code, "C") ; break;
            case 7 : strcat(code, "R") ; break;
            case 8 : strcat(code, "U") ; break;
            case 9 : strcat(code, "M") ; break;
		}	
		
		/* Traducción Decenas */
		switch (decena) {
            case 0 : strcat(code, "O") ; break;
            case 1 : strcat(code, "G") ; break;
            case 2 : strcat(code, "A") ; break;
            case 3 : strcat(code, "L") ; break;
            case 4 : strcat(code, "E") ; break;
            case 5 : strcat(code, "I") ; break;
            case 6 : strcat(code, "C") ; break;
            case 7 : strcat(code, "R") ; break;
            case 8 : strcat(code, "U") ; break;
            case 9 : strcat(code, "M") ; break;
		}	
		
		/* Traducción Unidades */
		switch (unidad) {						
            case 0 : strcat(code, "O") ; break;
            case 1 : strcat(code, "G") ; break;
            case 2 : strcat(code, "A") ; break;
            case 3 : strcat(code, "L") ; break;
            case 4 : strcat(code, "E") ; break;
            case 5 : strcat(code, "I") ; break;
            case 6 : strcat(code, "C") ; break;
            case 7 : strcat(code, "R") ; break;
            case 8 : strcat(code, "U") ; break;
            case 9 : strcat(code, "M") ; break;
		}	
		
			
		printf("\nEl precio %d se denota en codigo murcielago como %s", price, code);
	} /* Fin del if */
	
	printf("\n");
	system("pause");
	return 0;
}