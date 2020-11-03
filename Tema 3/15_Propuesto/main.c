#include <stdio.h>
#include <stdlib.h>

int main(void){
    float importe, capital, interes;
    int periodo;

    puts("INTERESES METODO DEL 'CARRETE'");
    puts("==============================");

    printf("\nIntroduce capital: ");
    scanf("%f", &capital);
    printf("Tasa de interes: ");
    scanf("%f", &interes);
    printf("Periodo de tiempo (en años): ");
    scanf("%d", &periodo);

    periodo = periodo * 365;

    importe = (capital * interes * periodo) / (360 * 100);

    printf("\nImporte final: %.2f", importe);

    puts("\n\nAMPLIACION DEL PROGRAMA");
    puts("=======================");

    printf("\nIntroduce capital: ");
    scanf("%f", &capital);
    printf("Periodo de tiempo (en años): ");
    scanf("%d", &periodo);
    printf("Capital final: ");
    scanf("%f", &importe);

    periodo = periodo * 365;

    importe = importe - capital;

    interes = (importe * 360 * 100) / (capital * periodo);

    printf("\nIntereses recibidos: %.2f", importe);
    printf("\nInteres anual: %.2f %c", interes, 37);

    printf("\n\n");
    system("pause");
    return 0;
}
