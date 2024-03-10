/*#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
    int option;

    do {
        int quant;
        int value;
        printf("Quantos numeros voce deseja inserir no array? \n");
        scanf("%d", &quant);

        if(quant <= 1){
            printf("Insira um valor válido maior que zero.\n");
            return 1;
        }

        int *array = (int *)malloc(quant * sizeof(int));

        for(int c=0; c<quant; c++){
            printf("Insira o elemento %d: ", c);
            scanf("%d", &array[c]);

        }

        printf("Array final: [");
         for (int c = 0; c < quant; c++) {
            printf("%d", array[c]);

            if (c < quant - 1) {
                printf(", ");
            }
        }
        printf("]\n");

        printf("=========================================");
        printf("Qual valor voce quer encontrar no array? ");
        scanf("%d", &value);
        int n = quant;
        
        for(int i=0; i<n; i++){
            if(array[i] == value){
                
                printf("Value %d was found at position %d \n", value, i);
                break;
            }
            printf("The value %d was not found \n", value);
            break;
        }

        printf("Deseja encerrar o programa? [1-sim / 2-nao] \n");
        scanf("%d", &option);
    }while(option == 2);
}*/

