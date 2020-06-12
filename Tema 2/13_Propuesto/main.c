/*
 *  All Rights Reserved.
 *  © 2020 Andrés Blázquez Colino
 *  andresblz@usal.es
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Caracteres especiales\n\n");

    printf("M%cs, Ver%cn, Autom%ctico\n", 160, 160, 160);
    printf("Tambi%cn, Num%crico, Qu%c\n", 130, 130, 130);
    printf("M%cnimo, D%cgito, Ah%c\n", 161, 161, 161);
    printf("Precisi%cn, C%cdigo, Programaci%cn\n", 162, 162, 162);
    printf("Min%cscula, N%cmero, Seg%cn\n", 163, 163, 163);
    printf("A%cadir, Espa%col\n", 164, 164);
    printf("%capa, %cisca\n", 165, 165);

    printf("\n");
    system("pause");
    return 0;
}