#include <stdio.h>
#include <stdlib.h>
#define MAX 30

/*
 *  IMPORTANTE
 *  El programa crea una matriz aleatoria con los valores
 *  fil y col introducidos por el usuario, si queremos probar
 *  con valores propios se debe descomentar y comentar la
 *  la parte de codigo correspondiente
 */

int main(void){

    int mat[MAX][MAX],
        fil, col,
        fil_f, col_f,
        cont = 0, sum = 0;
    float media = 0;

    puts("===============================");
    puts("      MEDIA DE UNA MATRIZ      ");
    puts("===============================");

    do{
        printf("Introduce numero de filas (max. 30): ");
        scanf("%d", &fil);
    }while(fil < 0 || fil > MAX);

    do{
        printf("Introduce numero de columnas (max. 30): ");
        scanf("%d", &col);
    }while(col < 0 || col > MAX);

    /*
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("mat[%d][%d]: ", f+1, c+1);
            scanf("%d", &mat[f][c]);
        }
    } 
    */

   /* CREACION MATRIZ ALEATORIA */
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            mat[f][c] = rand()%50;
        }
    }

    printf("\n\nMATRIZ INTRODUCIDA\n");
    for(int f = 0; f < fil; f++){
        for(int c = 0; c < col; c++){
            printf("%5d", mat[f][c]);
        }
        printf("\n");
    }

    do{
        printf("\nIntroduce la fila del elemento de inicio (max. %2d): ", fil);
        scanf("%d", &fil_f);
    }while(fil_f < 0 || fil_f > fil);
    fil_f = fil_f - 1;

    do{
        printf("Introduce la fila del elemento de inicio (max. %2d): ", col);
        scanf("%d", &col_f);
    }while(col_f < 0 || col_f > col);
    col_f = col_f - 1;


    /* RESULTADOS */
    printf("\nMatriz desde el elemento (%d,%d): %d\n", fil_f+1, col_f+1, mat[fil_f][col_f]);

    // Imprimir espacios
    for(int c = 0; c < col_f; c++)
        printf("%5c", 32);
       
    // Imprimir matriz
    for(int f = fil_f; f < fil; f++){
        if(cont == 0){
            for(int c = col_f; c < col; c++){
            printf("%5d", mat[f][c]);
            sum += mat[f][c];
            cont++;
            }
        } else {
            for(int c = 0; c < col; c++){
            printf("%5d", mat[f][c]);
            sum += mat[f][c];
            cont++;
            }
        }
        printf("\n");
    }
       

    media = sum / cont;

    printf("\nValores presentados: %d", cont);
    printf("\nMedia de los valores presentados: %4.2f", media);


    printf("\n");
    system("pause");
    return 0;
}
