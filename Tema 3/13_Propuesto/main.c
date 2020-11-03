#include <stdio.h>
#include <stdlib.h>

int main(void){
    int b500, b200, b100, b50, b20, b10, b5;
    int total;

    puts("MAQUINA DE CAMBIO DE BILLETES DE EURO");
    puts("=====================================");
    puts("Simula una maquina de cambio de billetes de usados (deteriorados) a nuevos.");
    puts("");
    puts("Se solicitara por denominacion el numero de billetes.");
    puts("Se calculara el importe total recibido y se indicara como dispensar");
    puts("esa cantidad en billetes nuevos, con el minimo número de billetes.");
    
    printf("\n\nNumero de billetes USADOS A CAMBIAR");
    printf("\n-----------------------------------");
    printf("\nBilletes de 500 euros?: ");
    scanf("%d", &b500);
    printf("Billetes de 200 euros?: ");
    scanf("%d", &b200);
    printf("Billetes de 100 euros?: ");
    scanf("%d", &b100);
    printf("Billetes de  50 euros?: ");
    scanf("%d", &b50);
    printf("Billetes de  20 euros?: ");
    scanf("%d", &b20);
    printf("Billetes de  10 euros?: ");
    scanf("%d", &b10);
    printf("Billetes de   5 euros?: ");
    scanf("%d", &b5);

    total = 500*b500 + 200*b200 + 100*b100 + 50*b50 + 20*b20 + 10*b10 + 5*b5;

    printf("\nImporte total a cambiar: %d euros", total);

    b500 = total / 500;
    b200 = (total - b500*500) / 200;
    b100 = (total - b500*500 - b200*200) / 100;
    b50  = (total - b500*500 - b200*200 - b100*100) / 50;
    b20  = (total - b500*500 - b200*200 - b100*100 - b50*50) / 20;
    b10  = (total - b500*500 - b200*200 - b100*100 - b50*50 - b20*20) /10;
    b5   = (total - b500*500 - b200*200 - b100*100 - b50*50 - b20*20 - b10*10) /5;

    printf("\n\nNumero de billetes NUEVOS A ENTREGAR");
    printf("\n------------------------------------");
    printf("\nBilletes de 500 euros: %d", b500);
    printf("\nBilletes de 200 euros: %d", b200);
    printf("\nBilletes de 100 euros: %d", b100);
    printf("\nBilletes de  50 euros: %d", b50);
    printf("\nBilletes de  20 euros: %d", b20);
    printf("\nBilletes de  10 euros: %d", b10);
    printf("\nBilletes de   5 euros: %d", b5);


    printf("\n\n");
    system("pause");
    return 0;
}
