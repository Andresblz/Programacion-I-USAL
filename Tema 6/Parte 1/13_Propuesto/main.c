#include <stdio.h>
#include <stdlib.h>

int main(void){

    int tbla[4][5] = {{11, 12, 13, 14, 15},
                      {21, 22, 23, 24, 25},
                      {31, 32, 33, 34, 35},
                      {41, 42, 43, 44, 45}};
    int fil = 4,
        col = 5;

    puts("====================================");
    puts("          TRASPONER MATRIZ          ");
    puts("====================================");

    printf("Matriz inicial: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", tbla[f][c]);
        }
        printf("\n");
    }

    printf("\n\nDescendente por filas, ascendente por columnas:\n");
    for(int f = fil-1; f >= 0; f--){
        for(int c = 0; c < col; c++){
            printf("%5d", tbla[f][c]);
        }
        printf("\n");
    }

    printf("\n\nDescendente por columnas, descendente por filas:\n");
    for(int c = col-1; c >= 0; c--){
        for(int f = fil-1; f >= 0; f--){
            printf("%5d", tbla[f][c]);
        }
        printf("\n");
    }

    printf("\n\nAscendente por columnas, ascendente por filas:\n");
    for(int c = 0; c < col; c++){
        for(int f = 0; f < fil; f++){
            printf("%5d", tbla[f][c]);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
