#include <stdio.h>
#include <stdlib.h>

#define MAX 15

/* PROTOTIPOS */
float media_vector(int *, int);
void lee_vector(int *, int);
void escribe_vector(int *, int);


/* FUNCION PRINCIPAL */
int main(void) {
    int v[MAX], dim;

    puts("========================");
    puts("      MEDIA VECTOR      ");
    puts("========================");

    do {
        printf("Introduce la dimension efectiva (Max. 15): ");
        scanf("%d", &dim);
    } while(dim < 1 || dim > MAX);

    lee_vector(v, dim);
    escribe_vector(v, dim);

    float media = media_vector(v, dim);
    printf("\nLa media del vector es: %.2f", media);

    puts("");
    system("pause");
    return 0;
}

float media_vector(int *v, int dim) {
    float sum = 0;
    float med = 0;

    for(int i = 0; i < dim; i++) sum += v[i];

    med = sum / dim;

    return med;
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