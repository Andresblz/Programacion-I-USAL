#include <stdio.h>
#include <stdlib.h>
#define MAX 3000

int main(void) {
    char frase[MAX], letra;
    int pos[MAX]={0}, rep=0;
    char *ptr;
    

    printf("\nIntroduce una frase: ");
    // gets(frase) --> warning: this program uses gets(), which is unsafe.
    // Por lo que usamos la función fgets(), más segura que gets().
    fgets(frase, MAX, stdin);

    ptr = frase;

    printf("\nLetra que desea encontrar y contar en la frase: ");
    scanf("%c", &letra);

    /* RESULTADOS */
    int j = -1;
    for(int i = 0; *(ptr+i) != '\0'; i++) {
        if(*(ptr+i) == letra) {
            pos[++j] = i+1;
            rep++;
        }
    }

    printf("\nLa letra '%c' se encuentra en las posiciones: ", letra);
    for(int k = 0; k <= j; k++) {
        printf("%4d", pos[k]);
    }
    printf("\nY se encuentra un total de %d veces repetida", rep);


    puts("");
    system("pause");
    return 0;
}
