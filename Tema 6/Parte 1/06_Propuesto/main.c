#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int main(void){
    int vector[DIM],
        dim,
        diff,
        diffmax;

    do{
        printf("Introduce maximo de numeros a introducir: ");
        scanf("%d", &dim);
    }while(dim < 2 || dim > DIM);

    printf("\nIntroduce numero v[%d]: ", 1);
    scanf("%d", &vector[0]);
    for(int i = 1; i < dim; i++){
        do{
            printf("Introduce numero v[%d]: ", i+1);
            scanf("%d", &vector[i]);
        }while(vector[i] <= vector[i-1]);
    }

    diffmax = vector[1] - vector[0];
    for(int i = 2; i < dim; i++){
        diff = vector[i] - vector[i-1];
        if(diff > diffmax) diffmax = diff;
    }

    printf("\n");

    for(int i = 0; i < dim; i++) printf("%6d", vector[i]);
    printf("\nDiferencia maxima: %d", diffmax);

    printf("\n\n");
    system("pause");
    return 0;
}
