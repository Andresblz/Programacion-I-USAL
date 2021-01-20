#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTIPOS */
int factorial(int);
int combinatorio(int, int);
float binomial(float, int, int);

/* FUNCION PRINCIPAL */
int main(void) {
    float p, res;
    int n, i;

    puts("========================");
    puts("      PROBABILIDAD      ");
    puts("========================");

    do {
        printf("\nIntroduce el valor de p (entre 0 y 1): ");
        scanf("%f", &p);
    } while(p < 0 || p > 1);

    do {
        printf("Introduce el valor de n (entero y positivo): ");
        scanf("%d", &n);
    } while(n < 0);

    do {
        printf("Introduce el valor de i (entre 0 y %d): ", n);
        scanf("%d", &i);
    } while(i < 0 || i > n);

    res = binomial(p, n, i);

    printf("\nLa probabilidad de p, n, i (%.3f, %d, %d) es: %.5f", p, n, i, res);

    puts("");
    system("pause");
    return 0;
}

float binomial(float p, int n, int i) {
    float res;
    
    res = combinatorio(n, i) * pow(p, i) * pow(1 - p, n - i);

    return res;
}

int combinatorio(int m, int n) {
    int res;

    res = (factorial(m))/(factorial(n) * factorial(m - n));

    return res;
}

int factorial(int num) {
    int res = 1;

    while(num > 1) {
        res *= num;
        num--;
    }
    
    return res;
}