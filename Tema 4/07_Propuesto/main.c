/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int option;
    int decimal, octal, hexa;

    do{
        printf("\n\nConversion entre sistemas de numeracion");
        printf("\n=======================================");
        printf("\n   1) De decimal a octal y hexadecimal.");
        printf("\n   2) De octal a decimal y hexadecimal.");
        printf("\n   3) De hexadecimal a decimal y octal.");
        printf("\nOtro) Salir.");
        printf("\n\nOpcion?: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("\nNumero en decimal?: ");
                scanf("%d", &decimal);
                printf("\n\nHexadecimal..: %x", decimal);
                printf("\nOctal........: %o", decimal);
                break;
                
            case 2:
                printf("\nNumero en octal?: ");
                scanf("%o", &octal);
                printf("\n\nDecimal......: %d", octal);
                printf("\nHexadecimal..: %x", octal);
                break;

            case 3:
                printf("\nNumero en hexadecimal?: ");
                scanf("%x", &hexa);
                printf("\n\nDecimal....: %d", hexa);
                printf("\nOctal......: %o", hexa);
                break;

            default:
                printf("\n");
                system("pause");
                return 0;
        }
    }while(option == 1 || option == 2 || option == 3);
}