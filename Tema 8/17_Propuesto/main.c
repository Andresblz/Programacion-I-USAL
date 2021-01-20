#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS */
long factorial(long);
long combinatorio(long, long);

/* FUNCION PRINCIPAL */
int main(void) {
    long m, n, res;

    puts("=================================");
    puts("      NUMEROS COMBINATORIOS      ");
    puts("=================================");

    do {
        printf("\nIntroduce el valor de m: ");
        scanf("%ld", &m);
        printf("Introduce el valor de n: ");
        scanf("%ld", &n);
    } while(m < 1 || n < 1 || n > m);

    res = combinatorio(m, n);

    printf("\nEl numero combinatorio de %ld y %ld es: %ld\n", m, n, res);

    puts("");
    system("pause");
    return 0;
}

long combinatorio(long m, long n) {
    long res;

    res = (factorial(m))/(factorial(n) * factorial(m - n));

    return res;
}

long factorial(long num) {
    long res = 1;

    while(num > 1) {
        res *= num;
        num--;
    }
    
    return res;
}