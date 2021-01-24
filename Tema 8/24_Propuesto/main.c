#include <stdio.h>
#include <stdlib.h>

#define MAX 15

/* PROTOTIPOS */
int ComparaVectores(double *, double *, int);
void lee_vector(double *, int);
void escribe_vector(double *, int);


/* FUNCION PRINCIPAL */
int main(void) {
    double v1[MAX], v2[MAX]; 
    int dim, comparacion;

    puts("=============================");
    puts("      COMPARAR VECTORES      ");
    puts("=============================");

    do {
        printf("Introduce la dimension efectiva (Max. 15): ");
        scanf("%d", &dim);
    } while(dim < 1 || dim > MAX);

    puts("\nVECTOR 1");
    lee_vector(v1, dim);
    escribe_vector(v1, dim);

    puts("\n\nVECTOR 2");
    lee_vector(v2, dim);
    escribe_vector(v2, dim);

    comparacion = ComparaVectores(v1, v2, dim);

    puts("\n");
    if(comparacion == 1) puts("Son iguales");
    else puts("NO son iguales");

    puts("");
    system("pause");
    return 0;
}

int ComparaVectores(double *v1, double *v2, int dm) {
    int esIgual = 1;

    for(int i = 0; i < dm && esIgual == 1; i++) {
        if (v1[i] == v2[i]) esIgual = 1;
        else esIgual = 2;
    }

    return esIgual;
}

void lee_vector(double *v, int dim) {
    for(int i = 0; i < dim; i++) {
        printf("Elemento %d? : ", i+1);
        scanf("%lf", &v[i]);
    }
}

void escribe_vector(double *v, int dim) {
    for(int i = 0; i < dim; i++) printf("%10.2f", v[i]);
}