#include <stdio.h>
#include <stdlib.h>

#define FIL 5
#define COL 3

/* PROTOTIPOS */
void iniciar(float (*)[], int, float);
void presentaMatriz(float [][], int);


/* FUNCION PRINCIPAL */
int main(void) {
    float mat[FIL][COL], valor;

    puts("==========================");
    puts("      INICIAR MATRIZ      ");
    puts("==========================");

    printf("\nIntroduce un valor aleatorio: ");
    scanf("%f", &valor);

    iniciar(mat, FIL, valor);
    presentaMatriz(mat, FIL);

    puts("");
    system("pause");
    return 0;
}

void iniciar(float (*mat)[COL], int fil, float valor) {
    for(int f = 0; f < fil; f++) {
        for(int c = 0; c < COL; c++) {
            mat[f][c] = valor;
        }
    }
}

void presentaMatriz(float mat[][COL], int fil) {
    for(int f = 0; f < fil; f++) {
        puts("");
        for(int c = 0; c < COL; c++) {
            printf("%10.2f", mat[f][c]);
        }
    }
}