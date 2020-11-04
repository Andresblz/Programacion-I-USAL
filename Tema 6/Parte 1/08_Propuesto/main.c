#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* strlen */

int main(void){
    char cadena[500];

    printf("Introduce la frase: ");
    gets(cadena);

    printf("\n\nEl texto introducido es: %s\n", cadena);

    printf("\nEl texto invertido es: ");
    for(int i = strlen(cadena); i >= 0; i--) printf("%c", cadena[i]);

    puts("");
    system("pause");
    return 0;
}
