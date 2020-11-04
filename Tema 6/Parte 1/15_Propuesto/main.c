#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 15

int main(void){

    int mat[MAX][MAX],
        n, x, y, vx, vy,
        lim, limx, limy,
        sumfil[MAX], sumcol[MAX], sumdia[2],
        aux, flag;

    char opt;

    do{
        puts("===========================");
        puts("      CUADRADO MAGICO      ");
        puts("===========================");

        do{
            printf("\nIntroduce el valor de N (max. 15 e impar): ");
            scanf("%d", &n);
        }while(n < 1 || n > MAX || n % 2 == 0);

        fflush(stdin);  // Limpiar buffer Windows
        fpurge(stdin);  // Limpiar buffer MacOS

        for(int f = 0; f < n; f++){
            for(int c = 0; c < n; c++){
                mat[f][c] = -1;
            }
        }

        /* Establecemos posiciones y limites de la matriz */
        x = n / 2;
        y = 0;
        lim = n * n;
        limx = n - 1;
        limy = n - 1;

        for(int cont = 1; cont <= lim; cont++){
            mat[y][x] = cont;
            vx = x;
            vy = y;
            x++;

            if(x > limx)
                x = 0;
            
            y--;

            if(y < 0)
                y = limy;

            if(mat[y][x] > -1){
                x = vx;
                y = vy + 1;
            }
        }

        /* SUMA COLUMNAS Y COMPROBACION */
        for(int f = 0; f < n; f++){
            aux = 0;
            for(int c = 0; c < n; c++){
                aux += mat[f][c];
            }
            sumcol[f] = aux;
        }

        for(int f = 1; f < n; f++){
            if(sumcol[0] == sumcol[f]){
                flag = 1;
            } else {
                flag = 0;
            }
        }

        /* SUMA FILAS Y COMPROBACION */
        for(int c = 0; c < n; c++){
            aux = 0;
            for(int f = 0; f < n; f++){
                aux += mat[f][c];
            }
            sumfil[c] = aux;
        }

        for(int c = 1; c < n; c++){
            if(sumfil[0] == sumfil[c]){
                flag = 1;
            } else {
                flag = 0;
            }
        }

        /* SUMA DIAGONALES Y COMPROBACION */
        for(int i = 0; i < n; i++){
            sumdia[0] += mat[i][i];
        }

        for(int i = 0; i < n; i++){
            sumdia[1] += mat[i][n-i-1];
        }

        if(sumdia[0] == sumdia[1]){
            flag = 1;
        } else {
            flag = 0;
        }

        /* RESULTADOS */
        printf("\nCUADRADO MAGICO %dx%d\n", n, n);
        for(int f = 0; f < n; f++){
            for(int c = 0; c < n; c++){
                printf("%5d", mat[f][c]);
            }
            printf("\n");
        }

        printf("\nSuma de sus diagonales: ");
        for(int i = 0; i < 2; i++)
            printf("%5d", sumdia[i]);

        printf("\nSuma de sus   columnas: ");
        for(int c = 0; c < n; c++)
            printf("%5d", sumcol[c]);

        printf("\nSuma de sus      filas: ");
        for(int f = 0; f < n; f++)
            printf("%5d", sumfil[f]);

        if(flag == 1)
            printf("\n\nEl cuadrado es magico.\n");
        else
            printf("\n\nEl cuadrado NO es magico.\n");

        do{
            printf("\nOtra ejecucion (S/N): ");
            opt = toupper(getchar());
        }while(opt != 'S' && opt != 'N');

    }while(opt != 'N');
    
    printf("\n");
    system("pause");
    return 0;
}
