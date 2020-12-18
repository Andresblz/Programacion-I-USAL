#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int var_a;          // Variable entera
    int *p_var_a;       // Puntero a entero

    puts("====================================");
    puts("              PUNTEROS              ");
    puts("====================================");

    /* 1. Leer un valor para la variable var_a */
    printf("\nIntroduce un valor: ");
    scanf("%d", &var_a);

    /* 2. Escribir contenido de la variable var_a */
    printf("\nEl contenido de var_a es: %d", var_a);

    /* 3. Apuntar a variable var_a con el puntero p_var_a */
    p_var_a = &var_a;

    /* 4. Utilizar puntero p_var_a para escribir el contenido de la variable var_a */
    printf("\nEl contenido de la variable var_a (desde p_var_a) es: %d", *p_var_a);

    /* 5. Utilizar el puntero p_var_a para leer un valor para la variable var_a */
    printf("\n\nValor para var_a (desde p_var_a): ");
    scanf("%d", p_var_a);

    /* 6. Escribir el contenido de la variable var_a */
    printf("\nEl contenido de var_a es: %d", var_a);

    /* 7. Utilizar el puntero p_var_a para escribir el contenido de la variable var_a */
    printf("\nEl contenido de var_a (desde p_var_a) es: %d", *p_var_a);

    /* 8. Escribir la dirección de la variable var_a utilizando el operador dirección */
    printf("\nLa direccion de var_a es: %p", &var_a);

    /* 9. Utilizar el puntero p_var_a para escribir la dirección de la variable var_a */
    printf("\nLa direccion de var_a (desde p_var_a) es: %p", p_var_a);

    /* 10. Escribir la dirección de la variable p_var_a */
    printf("\nLa dirección de p_var_a es: %p", &p_var_a);

    /* 11. Escribir el contenido de la variable p_var_a */
    printf("\nEl contenido de p_var_a es: %d", *p_var_a);

    puts("");
    system("pause");
    return 0;
}