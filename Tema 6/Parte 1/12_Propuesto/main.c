#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main(void){

    int tblsuma[MAX][MAX],
        tbla[MAX][MAX],
        tblb[MAX][MAX];
    int fil, col;

    puts("=====================================");
    puts("            SUMA MATRICES            ");
    puts("=====================================");

    do{
        printf("Introduce numero de filas (max. 30): ");
        scanf("%d", &fil);
    }while(fil < 0 || fil > MAX);

    do{
        printf("Introduce numero de columnas (max. 30): ");
        scanf("%d", &col);
    }while(col < 0 || col > MAX);

    printf("\nPrimera matriz: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("tbla[%d][%d]: ", f+1, c+1);
            scanf("%d", &tbla[f][c]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("tblb[%d][%d]: ", f+1, c+1);
            scanf("%d", &tblb[f][c]);
        }
        printf("\n");
    }

    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            tblsuma[f][c] = tbla[f][c] + tblb[f][c];
        }
    }

    puts("==================================");
    puts("            RESULTADOS            ");
    puts("==================================");


    printf("\nPrimera matriz: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", tbla[f][c]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", tblb[f][c]);
        }
        printf("\n");
    }

    printf("\nMatriz suma: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", tblsuma[f][c]);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
