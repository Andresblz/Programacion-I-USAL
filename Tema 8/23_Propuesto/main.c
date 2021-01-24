#include <stdio.h>
#include <stdlib.h>

#define MAX 15

/* PROTOTIPO */
void max_min_vector(int *, int, int *, int *);
void lee_vector(int *, int);
void escribe_vector(int *, int);


/* FUNCION PRINCIPAL */
int main(void) {
    int v[MAX], dim, max, min;

    puts("=====================================");
    puts("      MAXIMO Y MINIMO DE VECTOR      ");
    puts("=====================================");

    do {
        printf("Introduce la dimension efectiva (Max. 15): ");
        scanf("%d", &dim);
    } while(dim < 1 || dim > MAX);

    lee_vector(v, dim);
    puts("\nVECTOR");
    escribe_vector(v, dim);
    max_min_vector(v, dim, &max, &min);

    printf("\nValor maximo: %d\tValor minimo: %d", max, min);

    puts("");
    system("pause");
    return 0;
}

void max_min_vector(int *v, int dim, int *max, int *min) {
    int maxF = v[0], minF = v[0];

    for(int i = 1; i < dim; i++) {
        if(v[i] > maxF) maxF = v[i];
        if(v[i] < minF) minF = v[i];
    } 

    *max = maxF;
    *min = minF;
}

void lee_vector(int *v, int dim) {
    for(int i = 0; i < dim; i++) {
        printf("Elemento %d? : ", i+1);
        scanf("%d", &v[i]);
    }
}

void escribe_vector(int *v, int dim) {
    for(int i = 0; i < dim; i++) printf("%8d", v[i]);
}