#include <stdio.h>
#include <stdlib.h>

int main(void){
    int temp, millar, centenas, decenas, unidades, tempInverso, suma;
    
    do{
        printf("Introduce un tempero (hasta 4 cifras): ");
        scanf("%d", &temp);
    }while(temp < 0 || temp > 9999);

    millar   = (temp / 1000);
    centenas = (temp - (millar * 1000)) / 100;
    decenas  = (temp - (millar * 1000 + centenas * 100)) / 10;
    unidades = (temp - (millar * 1000 + centenas * 100 + decenas * 10));

    tempInverso = (unidades * 1000) + (decenas * 100) + (centenas * 10) + (millar);
    suma       = temp + tempInverso;

    printf("\ntempero introducido......: %d", temp);
    printf("\nUnidades de millar......: %d", millar);
    printf("\nCentenas................: %d", centenas);
    printf("\nDecenas.................: %d", decenas);
    printf("\nUnidades................: %d\n", unidades);

    printf("\ntempero invertido........: %d", tempInverso);
    printf("\nSuma de ambos...........: %d + %d = %d", temp, tempInverso, suma);

    printf("\n\n");
    system("pause");
    return 0;
}
