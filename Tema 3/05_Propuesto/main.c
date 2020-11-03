#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float num;

    do{
        printf("Introduce un numero real mayor que cero: ");
        scanf("%f", &num);
    }while(num <= 0);

    printf("\nNúmero introducido..........: %.2f", num);
    printf("\nCuadrado....................: %.4f", pow(num,2));
    printf("\nCubo........................: %.4f", pow(num,3));
    printf("\nLogaritmo neperiano.........: %.4f", log(num));
    printf("\nLogaritmo decimal...........: %.4f", log10(num));
    printf("\nRaiz cuadrada...............: %.4f", sqrt(num));

    printf("\n\n");
    system("pause");
    return 0;
}
