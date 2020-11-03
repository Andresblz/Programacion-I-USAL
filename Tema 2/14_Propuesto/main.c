#include <stdio.h>
#include <stdlib.h>

int main(void){
    int caracter, codNumASCII, codNumOctal, codNumHexa;

    printf("Dado un caracter, se indica su codigo ASCII.\n");
    printf("Introduzca el caracter y pulse <INTRO>: ");
    scanf("%c", &caracter);
    printf("Caracter y codigo ASCII en decimal, octal y hexadecimal: %c, %hhd, %hho, %hhx", caracter, caracter, caracter, caracter);

    printf("\n\nDado un numero en decimal, se indica su caracter ASCII asociado.\n");
    printf("Introduzca el codigo numerico en decimal y pulse <INTRO>: ");
    scanf("%d", &codNumASCII);
    printf("Codigo numerico en decimal y caracter ASCII asociado: %d, %c", codNumASCII, codNumASCII);

    printf("\n\nDado un numero en octal, se indica su caracter ASCII asociado.\n");
    printf("Introduzca el codigo numerico en octal y pulse <INTRO>: ");
    scanf("%o", &codNumOctal);
    printf("Codigo en octal y decimal, y caracter ASCII asociado: %o, %d, %c", codNumOctal, codNumOctal, codNumOctal);

    printf("\n\nDado un numero en hexadecimal, se indica su caracter ASCII asociado.\n");
    printf("Introduzca el codigo numerico en hexadecimal y pulse <INTRO>: ");
    scanf("%x", &codNumHexa);
    printf("Codigo en hexadecimal y decimal, y caracter ASCII asociado: %x, %d, %c", codNumHexa, codNumHexa, codNumHexa);

    printf("\n\n");
    system("pause");
    return 0;
}
