/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main(void){
    int n, i;
    long long fac;  // Para numeros mas grandes cambiar por 'long double'

    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &n);

    /* BUCLE FOR */
    fac = 1;
    for(i = 1; i <= n; i++){
        fac *= i;
    }
    printf("Factorial (bucle for): %lld\n\n", fac);

    /* BUCLE WHILE */
    fac = 1;
    i = 1;
    while(i <= n){
        fac *= i;
        i += 1;
    }
    printf("Factorial (bucle while): %lld\n\n", fac);

    /* BUCLE DO-WHILE */
    fac = 1;
    i = 1;
    do{
        fac *= i;
        i += 1;
    }while(i <= n);
    printf("Factorial (bucle do-while): %lld\n\n", fac);

    printf("\n");
    system("pause");
    return 0;
 }