#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define FIL 3
#define COL 4

int main(void) {
   int vector[DIM] = {25, 40, 55, 70, 85, 100, 115};

   int tabla[FIL][COL] = {  15,  25,  35,  45,
                           115, 125, 135, 145,
                           215, 225, 235, 245 };

   /* VECTOR */
   printf("\nVECTOR\n");

   /* 1. Recorrido y presentación en pantalla utilizando un índice. */
   printf("\nCon índice\n");
   for(int i = 0; i < DIM; i++) printf("%5d", vector[i]);
   puts("");

   /* 2. Recorrido y presentación en pantalla utilizando el nombre del array como puntero
      constante (que apunta al primer elemento del array), y aritmética de punteros. No se
      permite notación de subíndices. */
   // El nombre del array es un puntero que apunta al primer elemento del propio array
   printf("\nNombre del array como puntero\n");
   for(int i = 0; i < DIM; i++) printf("%5d", *(vector+i));
   puts("");

   /* 3. Recorrido y presentación en pantalla utilizando una variable puntero al tipo base
      del array, y aritmética de punteros. No se permite notación de subíndices. */
   printf("\nVariable puntero\n");
   int *ptrV;
   ptrV = vector;
   for(int i = 0; i < DIM; i++) {
      printf("%5d", *ptrV);
      *ptrV++ = i;
   }
   puts("");


   /* TABLA */
   printf("\n\nTABLA\n");

   /* 1. Recorrido y presentación en ptanalla utilizando dos índices. */
   printf("\nCon indices\n");
   for(int f = 0; f < FIL; f++) {
      for(int c = 0; c < COL; c++) {
         printf("%5d", tabla[f][c]);
      }
      puts("");
   }

   /* 2. Recorrido y presentación en pantalla utilizando el nombre de la tabla como puntero
      constante a filas (apunta a la primera fila del array), y aritmética de punteros. No se
      permite notación de subíndices. */
   printf("\nNombre de la tabla como puntero\n");
   for(int f = 0; f < FIL; f++) {
      for(int c = 0; c < COL; c++) {
         printf("%5d", *(*(tabla+f)+c));
      }
      puts("");
   }

   /* 3. Aprovechando el almacenamiento secuencial de los arrays bidimensionales en memoria,
      realizar el recorrido y presentación en pantalla mediante una variable puntero al tipo
      base, incrementando este puntero, mediante aritmética de punteros, tantas veces como
      elementos tenga el array bidimensional. */
   printf("\nVariable puntero\n");
   int *ptrT = *tabla;
   for(int f = 0; f < FIL; f++) {
      for(int c = 0; c < COL; c++) {
         printf("%5d", *(ptrT + f*COL + c));
      }
      puts("");
   }

   puts("");
   system("pause");
   return 0;
}