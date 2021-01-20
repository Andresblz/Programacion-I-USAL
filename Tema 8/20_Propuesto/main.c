#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS */
void doble (int *);
void triple (int *);
void cuadruple (int *);


/* FUNCION PRINCIPAL */
int main(void) {
    int num, numD, numT, numC;

    puts("=====================");
    puts("      MULTIPLOS      ");
    puts("=====================");

    printf("\nIntroduce el numero para calcular: ");
    scanf("%d", &num);

    numD = num;
    doble(&numD);
    printf("\nDoble: %d", numD);

    numT = num;
    triple(&numT);
    printf("\nTriple: %d", numT);

    numC = num;
    cuadruple(&numC);
    printf("\nCuadruple: %d", numC);    

    puts("");
    system("pause");
    return 0;
}

void doble(int *n) {
    *n *= 2;
}

void triple(int *n) {
    *n *= 3;
}

void cuadruple(int *n) {
    *n *= 4;
}