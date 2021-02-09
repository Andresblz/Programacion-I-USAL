#include <stdio.h>
#include <stdlib.h>

#define DIM 7
#define LIMSUP 50
#define LIMINF 0

int main(void) {
    int mat1[DIM][DIM],
        *mat2[DIM * DIM],
        dim, cont;

    puts("========================");
    puts("      ROTAR MATRIZ      ");
    puts("========================\n");

    do{
        printf("Introduzca la dimension de la matriz: ");
        scanf("%d", &dim);
    } while(dim < 0 || dim > DIM);

    for(int f = 0; f < dim; f++) {
        for(int c = 0; c < dim; c++) {
            do {
                printf("Elemento (%d, %d): ", f+1, c+1);
                scanf("%d", &mat1[f][c]);
            } while(mat1[f][c] < LIMINF || mat1[f][c] > LIMSUP);
        }
    }

    for(int f = 0, cont = 0; f < dim; f++) {
        for(int c = dim - 1; c >= 0; c--, cont++) {
            mat2[cont] = &mat1[c][f];
        }
    }

    puts("MATRIZ INTRODUCIDA:");
    for(int f = 0; f < dim; f++) {
        for(int c = 0; c < dim; c++) {
            printf("%5d", mat1[f][c]);
        }
        puts("");
    }

    puts("\n\nMATRIZ ROTADA:");
    for(int f = 0, cont = 0; f < dim; f++) {
        for(int c = 0; c < dim; c++, cont++) {
            printf("%5d", *mat2[cont]);
        }
        puts("");
    }

    puts("");
    system("pause");
    return 0;
}