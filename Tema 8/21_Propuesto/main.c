#include <stdio.h>
#include <stdlib.h>

#define MAX 15

/* PROTOTIPOS */
void lee_vector(long *, int);
void escribe_vector(long *, int);
void inicia_vector(long *, int, long);

/* FUNCION PRINCIPAL */
int main(void) {
    int dim;
    long v[MAX], valor;

    puts("==================================");
    puts("      FUNCIONES CON VECTORES      ");
    puts("==================================");

    do {
        printf("Introduce la dimension efectiva (Max. 15): ");
        scanf("%d", &dim);
    } while(dim < 1 || dim > MAX);

    puts("LECTURA DE DATOS");
    lee_vector(v, dim);
    escribe_vector(v, dim);

    puts("\n\nVALOR FIJO");
    printf("Introduce un valor aleatorio: ");
    scanf("%ld", &valor);
    inicia_vector(v, dim, valor);
    escribe_vector(v, dim);

    puts("");
    system("pause");
    return 0;
}

void lee_vector(long *v, int dim) {
    for(int i = 0; i < dim; i++) {
        printf("Elemento %d? : ", i+1);
        scanf("%ld", &v[i]);
    }
}

void escribe_vector(long *v, int dim) {
    for(int i = 0; i < dim; i++) printf("%8ld", v[i]);
}

void inicia_vector(long *v, int dim, long valor) {
    for(int i = 0; i < dim; i++) v[i] = valor;
}