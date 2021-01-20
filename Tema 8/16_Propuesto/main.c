#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTIPOS */
void sumaEnteros(int);
void sumaEntreNumeros(int, int);
void sumaSerie(int, int);
void invNumero(long);

/* FUNCION PRINCIPAL */
int main(void) {
    int valor, base, tope, exp, num;
    long int lnum;

    puts("================================");
    puts("      DIFERENTES FUNCIONES      ");
    puts("================================");


    printf("\nIntroduce un valor para realizar la suma de los primeros numeros: ");
    scanf("%d", &valor);
    sumaEnteros(valor);

    puts("-----------------------------------------------");

    printf("\nIntroduce la base de los numeros a sumar: ");
    scanf("%d", &base);
    printf("Introduce el tope de los numeros a sumar: ");
    scanf("%d", &tope);
    sumaEntreNumeros(base, tope);

    puts("-----------------------------------------------");

    printf("\nIntroduce el numero de la serie: ");
    scanf("%d", &num);
    printf("Introduce el exponente de la serie: ");
    scanf("%d", &exp);
    sumaSerie(num, exp);

    puts("-----------------------------------------------");

    do {
        printf("\nIntroduce un valor positivo para obtener su inverso: ");
        scanf("%ld", &lnum);
    } while(lnum < 1);
    invNumero(lnum);

    puts("-----------------------------------------------");

    puts("");
    system("pause");
    return 0;
}

void sumaEnteros(int valor) {
    int res = 0;

    for(int i = 1; i <= valor; i++) {
        res += i;
    }

    printf("Suma de los %d numeros enteros: %d\n\n", valor, res);
}

void sumaEntreNumeros(int base, int tope) {
    int res = 0;

    for(int i = base; i <= tope; i++){
        if((i % 2) == 0) {
            res += i;
        }
    }

    printf("Suma de los valores comprendidos entre %d y %d: %d\n\n", base, tope, res);
}

void sumaSerie(int num, int exp) {
    int res = 1;

    for(int i = 2; i <= exp; i++) {
        res += pow(num, i);
    }

    printf("Suma de los valores de la serie hasta %d^%d: %d\n\n", num, exp, res);
}

void invNumero(long lnum) {
    long res = 0, rem, num = lnum;

    while(num != 0) {
        rem = num % 10;
        res = res * 10 + rem;
        num /= 10;
    }

    printf("El numero inverso de %ld es: %ld\n\n", lnum, res);
}