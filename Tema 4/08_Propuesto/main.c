/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

#define LIMITE 90.00

int main(void){
    /* VARIABLES */
    char nombre[80];
    int dia, mes, anio;
    int numIngreso, diasFactura, diasDeduc;
    float costePorDia, costeConsulta, costeMedicamento, costeDiverso, costeTotal, costeTotalDia;
    float deducSeguro, porcentaje, deducMedicamento, deducDiaSeguro, deducTotal;
    float total;


    /* PETICION DE DATOS */
    printf("\n=======================================================================");
    printf("\n                   CALCULO DE FACTURA HOSPITALARIA                     ");
    printf("\n=======================================================================");

    printf("\nDATOS DEL PACIENTE");
    printf("\n\tNombre: ");
    fgets(nombre, 80, stdin);
    printf("\tFecha de ingreso");
    printf("\n\t\tDia: ");
    scanf("%d", &dia);
    printf("\t\tMes: ");
    scanf("%d", &mes);
    printf("\t\tAño: ");
    scanf("%d", &anio);
    printf("\tNumero de dias ingresado: ");
    scanf("%d", &numIngreso);

    printf("\nCOSTES");
    printf("\n\tCoste por dia.............................: ");
    scanf("%f", &costePorDia);
    printf("\tCoste consultas...........................: ");
    scanf("%f", &costeConsulta);
    printf("\tCoste medicamentos........................: ");
    scanf("%f", &costeMedicamento);
    printf("\tCostes diversos...........................: ");
    scanf("%f", &costeDiverso);

    printf("\nDEDUCCIONES");
    printf("\n\tDeduccion diaria del Seguro...............: ");
    scanf("%f", &deducSeguro);
    printf("\tPorcentaje deduccion ayuda medicamentos...: ");
    scanf("%f", &porcentaje);


    /* CALCULO COSTES Y NUMERO DE DIAS FACTURADOS */
    diasDeduc = numIngreso - (numIngreso % 4);
    diasFactura = numIngreso - (numIngreso / 4);
    costeTotalDia = costePorDia * diasFactura;
    costeTotal = (costePorDia * diasFactura) + costeConsulta + costeMedicamento + costeDiverso;

    /* CALCULO DEDUCCIONES */
    deducDiaSeguro = - deducSeguro * diasDeduc;

    if(deducDiaSeguro == 0){
        deducDiaSeguro = 0;
    }

    if(costeMedicamento > LIMITE){
        deducMedicamento = - (porcentaje / 100) * costeMedicamento;
    } else {
        deducMedicamento = 0;
    }

    deducTotal = deducDiaSeguro + deducMedicamento;

    /* PRECIO FINAL */
    total = costeTotal + deducTotal;
    if(total < 0){
        total = 0;
    }


    /* FACTURA FINAL */
    printf("\n=======================================================================");
    printf("\n                         FACTURA HOSPITALARIA                          ");
    printf("\n=======================================================================");
    printf("\nPACIENTE..............: %s", nombre);
    printf("INGRESO...............: %d/%02d/%d", dia, mes, anio);
    printf("\nDIAS INGRESADO........: %d", numIngreso);
    printf("\n\nDIAS FACTURADOS................: %d", diasFactura);
    printf("\nCOSTE TOTAL DIAS ESTANCIA......: %.2f", costeTotalDia);
    printf("\nCOSTE TOTAL....................: %.2f", costeTotal);
    printf("\n\nDIAS DEDUCCION SEGURO..........: %d", diasDeduc);
    printf("\nDEDUCCION SEGURO...............: %.2f", deducDiaSeguro);
    printf("\nDEDUCCION POR MEDICAMENTOS.....: %.2f", deducMedicamento);
    printf("\nDEDUCCION TOTAL................: %.2f", deducTotal);
    printf("\n\nTOTAL A PAGAR..................: %.2f", total);


    printf("\n");
    system("pause");
    return 0;
}