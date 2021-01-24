#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 15

/* PROTOTIPOS */
void IniciaArrayAleatorio(int *, int, int, int, int);
void mostrarArray(int *, int);

/* FUNCION PRINCIPAL */
int main(void) {
    int vec[MAX], dim, inf, sup, rep;
    char opt;

    puts("============================");
    puts("      VECTOR ALEATORIO      ");
    puts("============================\n");

    do {
        printf("Introduce la dimension del vector (entre 1 y %d): ", MAX);
        scanf("%d", &dim);
    } while(dim < 1 || dim > MAX);

    printf("Introduce el limite inferior: ");
    scanf("%d", &inf);

    do {
        printf("Introduce el limite superior: ");
        scanf("%d", &sup);
    } while(sup < inf);

    do {
        printf("Numeros repetidos (s/n)? ");
        fflush(stdin);
        opt = toupper(getchar());
    } while(opt != 'S' && opt != 'N');

    if(opt == 'S') rep = 1;
    if(opt == 'N') rep = 0;

    IniciaArrayAleatorio(vec, dim, inf, sup, rep);
    mostrarArray(vec, dim);

    puts("");
    system("pause");
    return 0;
}

void IniciaArrayAleatorio(int *v, int dim, int liminf, int limsup, int sinrepetidos) {
    int vRep[dim], rep = 1, k;
    v[0] = liminf + rand() % (limsup - liminf);

    for(int i = 1; i < dim; i++) {
        do {
            v[i] = liminf + rand() % (limsup - liminf);
            rep = 0;
            for(k = i - 1; k <= i && sinrepetidos == 0; k++) {
                if(v[i] == v[k]) rep = 1;
            }
            k = k - 1;
        } while(sinrepetidos == 1 && rep == 1);
    }
}

void mostrarArray(int *v, int dim) {
    for(int i = 0; i < dim; i++) printf("%5d", v[i]);
}