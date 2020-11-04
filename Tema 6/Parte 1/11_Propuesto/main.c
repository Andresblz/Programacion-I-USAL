#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int main(void){

    int tbla[MAX][MAX],
        fil, col;
    
    puts("===================================");
    puts("   MAXIMO Y MINIMO DE UNA MATRIZ   ");
    puts("===================================");

    do{
        printf("Introduce el numero de filas (máx. 25): ");
        scanf("%d", &fil);
    }while(fil < 0 || fil > MAX);

    do{
        printf("Introduce el numero de columnas (máx. 25): ");
        scanf("%d", &col);
    }while(col < 0 || col > MAX);

    printf("\nIntroduce la matriz:\n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("tbla[%d][%d]: ", f+1, c+1);
            scanf("%d", &tbla[f][c]);
        }
        printf("\n");
    }

    /* 
     * Declaramos maximo y minimo igualandolos al primer
     * valor de la matriz, para posteriormente recorrer
     * esta y reemplazar los valores.
     */
    int maximo = tbla[0][0],
        minimo = tbla[0][0];

    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            if(tbla[f][c] > maximo){
                maximo = tbla[f][c];
            }else if(tbla[f][c] < minimo){
                minimo = tbla[f][c];
            }
        }
    }

    /* RESULTADOS */
    printf("Maximo: %d\n", maximo);
    printf("Minimo: %d\n", minimo);
    printf("Coordenadas elemento máximo:\n");

    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            if(tbla[f][c] == maximo){
                printf("(%d,%d)\n", f+1, c+1);
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
