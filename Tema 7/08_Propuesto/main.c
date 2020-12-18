#include <stdio.h>
#include <stdlib.h>
#define MIN 1000
#define MAX 7000
#define LIM 15

int main(void) {
    int v[LIM],                 // Vector principal
        *v_ord[LIM],            // Vector de punteros
        repetido,
        menor;

    puts("================================");
    puts("       VECTOR DE PUNTEROS       ");
    puts("================================");

    for(int i = 0; i < LIM; i++){
        do {
            repetido = 0;
            printf("Introduce el valor para v[%d]: ", i+1);
            scanf("%d", &v[i]);

            /* Comprobacion repetidos */
            if (i != 0) {
                for(int j = i; j > 0; j--) {
                    if(v[i] == v[j-1]) repetido = 1;
                }
            }

        } while(v[i] < MIN || v[i] > MAX || repetido == 1);
    } 

    int i = 0;
    for(int x = MIN; x < MAX; x++) {
        int j = -1;
        int encontrado = 0;
        while (encontrado == 0 && j < LIM-1) {
            j += 1;
            if(v[j] == x) {
                encontrado = 1;
            }
        }

        if(encontrado == 1) {
            v_ord[i] = &v[j];
            i += 1;
        }
    }

    printf("\nVector de punteros (Ordenado): \n");
    for(int i = 0; i < LIM; i++) printf("%6d", *v_ord[i]);

    printf("\nVector introducido (Desordenado): \n");
    for(int i = 0; i < LIM; i++) printf("%6d", v[i]);

    puts("");
    system("pause");
    return 0;
}