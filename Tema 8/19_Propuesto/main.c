#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS */
int mcd(int, int);
int mcm(int, int);

/* FUNCION PRINCIPAL */
int main(void) {
    int num1, num2, rMCD, rMCM;

    puts("=====================");
    puts("      MCD Y MCM      ");
    puts("=====================");

    do {
        printf("\nIntroduce el primer numero (positivo): ");
        scanf("%d", &num1);
    } while(num1 < 0);

    do {
        printf("Introduce el segundo numero (positivo): ");
        scanf("%d", &num2);
    } while(num2 < 0);

    rMCD = mcd(num1, num2);
    rMCM = mcm(num1, num2);

    printf("\nEl Maximo Comun Divisor de %d y %d es: %d", num1, num2, rMCD);
    printf("\nEl Minimo Comun Multiplo de %d y %d es: %d", num1, num2, rMCM);

    puts("");
    system("pause");
    return 0;
}

int mcd(int num1, int num2) {
    int a, b, c;
    
    if(num2 < num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    a = num1;
    b = num2;

    do {
        c = a % b;
        if(c != 0) {
            a = b;
            b = c;
        }
    } while(c != 0);
    
    return b;
}

int mcm(int num1, int num2) {
    int res;

    res = (num1 * num2) / mcd(num1, num2);
    
    return res;
}