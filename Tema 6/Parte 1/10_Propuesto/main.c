#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main(void){
    
    /* VARIABLES */
    int fil,
        col,
        tbla[MAX][MAX],
        vx[MAX],
        vy[MAX];

    puts("======================================");
    puts("         MATRICES Y VECTORES          ");
    puts("======================================");

    /* DIMENSION MATRIZ */
    do{
        printf("Introduce el numero de filas (max. 15): ");
        scanf("%d", &fil);
    }while(fil < 0 || fil > MAX);

    do{
        printf("Introduce el numero de columnas (max. 15): ");
        scanf("%d", &col);
    }while(col < 0 || col > MAX);

    /* MATRIZ */
    for(int i = 0; i < fil; i++){
        for(int j = 0; j < col; j++){
            printf("tbla[%d][%d]: ", i+1, j+1);
            scanf("%d", &tbla[i][j]);
        }
        printf("\n");
    }

    printf("Matriz introducida: \n");
    for(int i = 0; i < fil; i++){
        for(int j = 0; j < col; j++){
            printf("%5d", tbla[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    /* VECTOR */
    for(int i = 0; i < col; i++){
        printf("vx[%d]: ", i+1);
        scanf("%d", &vx[i]);
    }

    printf("Vector introducido: \n");
    for(int i = 0; i < col; i++){
        printf("%5d", vx[i]);
    }

    printf("\n\n");

    /* RESULTADOS */
    for(int i = 0; i < fil; i++){
        for(int j = 0; j < col; j++){
            vy[i] += tbla[i][j] * vx[j];
        }
    }

    printf("Vector resultante: \n");
    for(int i = 0; i < fil; i++){
        printf("%5d", vy[i]);
    }


    puts("");
    system("pause");
    return 0;
}
