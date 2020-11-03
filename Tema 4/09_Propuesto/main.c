#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2, num3;

    printf("Primer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Tercer numero: ");
    scanf("%d", &num3);

    if(num1 == num2 || num2 == num3 || num1 == num3){
        printf("\nNo son diferentes");
    } else if (num1 < num2 && num1 < num3){
        printf("\nNumero menor: %d", num1);
    } else if (num2 < num1 && num2 < num3){
        printf("\nNumero menor: %d", num2);
    } else if (num3 < num1 && num3 < num2){
        printf("\nNumero menor: %d", num3);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
