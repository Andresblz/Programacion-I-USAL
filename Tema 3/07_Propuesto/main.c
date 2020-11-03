#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Ocupacion de los distintos tipos de datos en C\n");
    printf("==============================================\n");
    printf("       tipo        | ocupacion en bytes |     \n");
    printf("-------------------|--------------------|-----\n");
    printf("CARACTERES         |                    |     \n");
    printf("   unsigned char   |          %d         |    \n", sizeof(unsigned char));
    printf("   char            |          %d         |    \n", sizeof(char));
    printf("                   |                    |     \n");
    printf("ENTEROS            |                    |     \n");
    printf("   int             |          %d         |    \n", sizeof(int));
    printf("   unsigned int    |          %d         |    \n", sizeof(unsigned int));
    printf("   short           |          %d         |    \n", sizeof(short));
    printf("   unsigned short  |          %d         |    \n", sizeof(unsigned short));
    printf("   long            |          %d         |    \n", sizeof(long));
    printf("   unsigned long   |          %d         |    \n", sizeof(unsigned long));
    printf("                   |                    |     \n");
    printf("REALES             |                    |     \n");
    printf("   float           |          %d         |    \n", sizeof(float));
    printf("   double          |          %d         |    \n", sizeof(double));
    printf("   long double     |         %d         |    \n", sizeof(long double));


    printf("\n\n");
    system("pause");
    return 0;
}
