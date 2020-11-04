#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int main(void){

    int sum_marco = 0, 
        sum_intern = 0,
        fil, col;
    int mat[MAX][MAX];

    puts("====================================");
    puts("            MATRIZ MARCO            ");
    puts("====================================");

    do{
        printf("Introduce numero de filas (max. 25): ");
        scanf("%d", &fil);
    }while(fil < 3 || fil > MAX);

    do{
        printf("Introduce numero de columnas (max. 25): ");
        scanf("%d", &col);
    }while(col < 3 || col > MAX);

    printf("\nMatriz: \n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("Mat[%d][%d]: ", f+1, c+1);
            scanf("%d", &mat[f][c]);
        }
        printf("\n");
    }

    /*  SUMA ELEMENTOS MARCO */
    for(int c = 0; c < col; c++){
        sum_marco += mat[0][c];
        sum_marco += mat[fil-1][c];
    }

    for(int f = 1; f < fil-1; f++){
        sum_marco += mat[f][0];
        sum_marco += mat[f][col-1];
    }


    /* SUMA ELEMENTOS INTERNOS */
    for(int f = 1; f < fil-1; f++){
        for(int c = 1; c < col-1; c++){
            sum_intern += mat[f][c];
        }
    }


    puts("==================================");
    puts("            RESULTADOS            ");
    puts("==================================");

    printf("\nMatriz introducida:\n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", mat[f][c]);
        }
        printf("\n");
    }

    printf("\nSuma elementos 'marco' %8d", sum_marco);
    printf("\nSuma elementos interiores %5d\n", sum_intern);

    if(sum_marco >= sum_intern){
        printf("La matriz es un marco\n");
    } else {
        printf("La matriz NO es un marco\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
