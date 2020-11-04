#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int main(void){
    int vPri[DIM],
        vInv[DIM],
        dim,
        j, k;

    do{
        do{
            printf("\nIntroduce dimension del vector (maximo 100 / < 0 para salir): ");
            scanf("%d", &dim);
        }while(dim > DIM);

        for(j = 0; j < dim; j++){
            printf("Vector[%d]: ", j+1);
            scanf("%d", &vPri[j]);
        }

        if(dim > 0){
            for(j = 0, k = dim-1; j < dim; j++, k--) vInv[k] = vPri[j];

            printf("\nLista introducida:\n");
            for(j = 0; j < dim; j++) printf("%6d", vPri[j]);

            printf("\nLista invertida:\n");
            for(j = 0; j < dim; j++) printf("%6d", vInv[j]);
        }

    }while(dim >= 0);

    printf("\n\n");
    system("pause");
    return 0;
}