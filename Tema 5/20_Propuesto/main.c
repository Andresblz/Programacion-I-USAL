#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char opcion;
    float eur_lib, eur_dol;
    float euros, libras, dolares;

    do{
        system("cls");
        puts("============================================================");
        puts("                     CONVERSION DE DIVISAS                  ");
        puts("============================================================");
        puts("\t0) Introducir valores cotizacion divisas");
        puts("\ta) Convertir euros a dolares y libras");
        puts("\tb) Convertir dolares a euros y libras");
        puts("\tc) Convertir libras a euros y dolares");
        puts("\ts) Salir");
        printf("Opcion? ");
        scanf("%c", &opcion);
        opcion = toupper(opcion);
        fflush(stdin);

        switch(opcion){
            case '0':     /* VALORES COTIZACION */
                printf("\nIntroduzca cuantas libras son 1 euro: ");
                scanf("%f", &eur_lib);
                printf("Introduzca cuantos dolares son 1 euro: ");
                scanf("%f", &eur_dol);
                fflush(stdin);
                break;

            case 'A':   /* EUROS A DOLARES Y LIBRAS */
                printf("\nIntroduzca importe en euros: ");
                scanf("%f", &euros);
                fflush(stdin);

                libras = euros * eur_lib;
                dolares = euros * eur_dol;

                printf("%8.4f Euros\n", euros);
                printf("%8.4f Libras  (1 Euro = %8.4f Libras)\n", libras, eur_lib);
                printf("%8.4f Dolares (1 Euro = %8.4f Dolares)\n", dolares, eur_dol);
                break;

            case 'B':   /* DOLARES A EUROS Y LIBRAS */
                printf("\nIntroduzca importe en dolares: ");
                scanf("%f", &dolares);
                fflush(stdin);

                euros = dolares / eur_dol;
                libras = euros * eur_lib;

                printf("%8.4f Dolares\n", dolares);
                printf("%8.4f Euros  (1 Dolar = %8.4f Euros)\n", euros, 1 / eur_dol);
                printf("%8.4f Libras (1 Dolar = %8.4f Libras)\n", libras, (1 / eur_dol) * eur_lib);

                break;

            case 'C':   /* LIBRAS A EUROS Y DOLARES */
                printf("\nIntroduzca importe en libras: ");
                scanf("%f", &libras);
                fflush(stdin);

                euros = libras / eur_lib;
                dolares = euros * eur_dol;

                printf("%8.4f Libras\n", libras);
                printf("%8.4f Euros   (1 Libra = %8.4f Euros)\n", euros, 1 / eur_lib);
                printf("%8.4f Dolares (1 Libra = %8.4f Dolares)\n", dolares, (1 / eur_lib) * eur_dol);
                break;
                
            case 'S':   /* SALIR */
                printf("\nSaliendo...");
        }
        printf("\nPulse enter...");
        getchar();
    }while(opcion != 'S');

    printf("\n");
    return 0;
}
