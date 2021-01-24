#include <stdio.h>
#include <stdlib.h>

#define FIL 10
#define COL 10

/* PROTOTIPOS */
void cargarMatriz(int (*)[], int, int, int);
void verMatriz(int (*)[], int, int);
int extraeColumnaMaximo(int (*)[], int, int, int *);
void verColumna(int *, int);


/* FUNCION PRINCIPAL */
int main(void) {
    int mat[FIL][COL], vec[FIL], 
        fil, col, num;

    puts("==================================");
    puts("      EXTRAER COLUMNA MÁXIMO      ");
    puts("==================================");

    do{
        printf("\nIntroduce FILAS (entre 1 y %d): ", FIL);
        scanf("%d", &fil);
    } while(fil < 1 || fil > FIL);

    do{
        printf("Introduce COLUMNAS (entre 1 y %d): ", COL);
        scanf("%d", &col);
    } while(col < 1 || col > COL);

    do{
        printf("Introduce un valor aleatorio (entero entre 1 y %d): ", FIL*COL);
        scanf("%d", &num);
    } while(num < 1 || num > FIL*COL);

    cargarMatriz(mat, fil, col, num);
    verMatriz(mat, fil, col);

    puts("\n\nVector columna máxima: ");

    extraeColumnaMaximo(mat, fil, col, vec);
    verColumna(vec, fil);

    puts("");
    system("pause");
    return 0;
}

void cargarMatriz(int (*m)[COL], int nfil, int ncol, int num) {
    int v = 3, valor, flag = 0;

    for(int f = 0; f < nfil; f++) {
        for(int c = 0; c < ncol; c++) {
            if(f == 0 && c == 0) {
                m[f][c] = num;
                valor = num;
                flag = 1;
            } else if (flag == 1) {
                m[f][c] = valor + v;
                valor = m[f][c];
                flag = 0;
                v++;
            } else if (flag == 0) {
                m[f][c] = valor - v;
                valor = m[f][c];
                flag = 1;
                v++;
            } 
        }
    }
}

void verMatriz(int (*m)[COL], int nfil, int ncol) {
    for(int f = 0; f < nfil; f++) {
        puts("");
        for(int c = 0; c < ncol; c++) {
            printf("%5d", m[f][c]);
        }
    }
}

int extraeColumnaMaximo(int (*m)[COL], int nfil, int ncol, int *v) {
    int max = m[0][0], mCol;

    if(v == NULL || m == NULL || nfil <= 0 || nfil > FIL || ncol <= 0 || ncol > COL) return -1;

    for(int f = 0; f < nfil; f++) {
        for(int c = 0; c < ncol; c++) {
            if(m[f][c] > max && (f != 0 && c != 0)) {
                max = m[f][c];
                mCol = c;
            } 
        }
    }

    for(int f = 0; f < nfil; f++) {
        v[f] = m[f][mCol];
    }

    return 0;
}

void verColumna(int *v, int dim) {
    for(int i = 0; i < dim; i++) printf("%5d", v[i]);
}