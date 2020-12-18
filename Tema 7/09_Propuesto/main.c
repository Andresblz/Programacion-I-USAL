#include <stdio.h>
#include <stdlib.h>
#define FIL 3
#define COL 4
#define LIM 10

int main(void) {
    char vletras[] = {'A', 'F', 'H', 'K', 'L', 'O', 'S', 'U', 'X', 'Z', '\0'};
    char iUsuario[FIL][COL];
    char *mapa[FIL][COL];

    for(int f = 0; f < FIL; f++) {
        for(int c = 0; c < COL; c++) {
            int salir = 0;
            printf("Introduzca carácter [%d][%d]: ", f+1, c+1);
            scanf("%c", &iUsuario[f][c]);
            fflush(stdin);

            for(int i = 0; i < LIM; i++) {
                if(iUsuario[f][c] == vletras[i]) {
                    mapa[f][c] = &vletras[i];
                    salir = 1;
                } else if (iUsuario[f][c] != vletras[i] && salir == 0) {
                    mapa[f][c] = NULL;
                }
            }
        }
    }

    printf("\nResultado obtenido: \n");
    for(int f = 0; f < FIL; f++) {
        for(int c = 0; c < COL; c++) {
            if(mapa[f][c] == NULL) printf("    *");
            else printf("%5c", *mapa[f][c]);
        }
        printf("\n");
    }


    puts("");
    system("pause");
    return 0;
}