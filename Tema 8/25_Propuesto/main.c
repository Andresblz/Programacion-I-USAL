#include <stdio.h>
#include <stdlib.h>

#define FIL 4
#define COL 4

/* PROTOTIPOS */
float traza(float (*)[]);
int simetrica(float (*)[]);
void presentaMatriz(float [][]);

/* FUNCION PRINCIPAL */
int main(void) {
    float m[FIL][COL], tr;
    int sim;

    puts("========================");
    puts("      TRAZA MATRIZ      ");
    puts("========================");

    for(int f = 0; f < FIL; f++) {
        puts("");
        for(int c = 0; c < COL; c++) {
            printf("Elemento [%d][%d]: ", f+1, c+1);
            scanf("%f", &m[f][c]);
        }
    }

    tr = traza(m);
    sim = simetrica(m);

    presentaMatriz(m);
    if(sim == 1) printf("\n\tSimetrica: SI");
    else printf("\n\tSimetrica: NO");
    printf("\n\tTraza: %.2f", tr);

    puts("");
    system("pause");
    return 0;
}

float traza(float (*mat)[COL]) {
    float res;

    for(int f = 0; f < FIL; f++) {
        for(int c = 0; c < COL; c++) {
            if(f == c) res += mat[f][c];
        }
    }

    return res;
}

int simetrica(float (*mat)[COL]) {
    int flag = 1;

    for(int f = 0; f < FIL && flag == 1; f++) {
        for(int c = 0; c < COL && flag == 1; c++) {
            if(f != c) {
                if(mat[f][c] == mat[c][f]) flag = 1;
                else flag = 0;
            }
        }
    }
    
    if(flag == 1) return 1;
    else return 0;
}

void presentaMatriz(float mat[][COL]) {
    for(int f = 0; f < FIL; f++) {
        puts("");
        for(int c = 0; c < COL; c++) {
            printf("%10.2f", mat[f][c]);
        }
    }
}