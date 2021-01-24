#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTIPOS */
void simplificaFraccion(long *, long *);
long mcd(long, long);

/* FUNCION PRINCIPAL */
int main(void) {
    long num, den, max;

    puts("================================");
    puts("      SIMPLIFICAR FRACCION      ");
    puts("================================\n");

    printf("Introduce el numerador: ");
    scanf("%ld", &num);
    printf("Introduce el denominador: ");
    scanf("%ld", &den);

    printf("Fraccion introducida: %ld/%ld\n", num, den);
    simplificaFraccion(&num, &den);
    printf("Fraccion simplificada: %ld/%ld\n", num, den);

    puts("");
    system("pause");
    return 0;
}

void simplificaFraccion(long *num, long *den) {
    long max;
    int sign = 0;

    if((*num * *den) < 0 ) sign = 1;

    max = mcd(labs(*num), labs(*den));

    *num = labs(*num) / max;
    *den = labs(*den) / max;

    if(sign) *num = -(*num);
}

long mcd(long a, long b) {
    long c;

    if(b > a) {
        long temp = a;
        a = b;
        b = temp;
    }

    do {
        c = a % b;
        if(c != 0) {
            a = b;
            b = c;
        }
    } while(c != 0);

    return b;
}