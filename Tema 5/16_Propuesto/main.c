#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");

    for(int i = 0; i <= 255; i++){
        printf("%c - %d\n", i, i);
        if(i % 20 == 0 && i != 0){
            printf("\nPulse enter...");
            getchar();
            system("cls");
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
