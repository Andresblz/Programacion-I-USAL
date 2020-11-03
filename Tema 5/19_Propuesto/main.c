#include <stdio.h>
#include <stdlib.h>

int main(void){
    int f1 = 0, f2 = 1, fn, lim;

    puts("Sucesion de Fibonacci.");
    puts("Introduce el numero de terminos a representar.");

    do{
        printf("(Entre 1 y 50): ");
        scanf("%d", &lim);
    }while(lim < 1 || lim > 50);

    for(int i = 0; i < lim; i++){
        fn = f1 + f2;
        printf("%5d", fn);
        f1 = f2;
        f2 = fn;
    }
    
    printf("\n");
    system("pause");
    return 0;
}
