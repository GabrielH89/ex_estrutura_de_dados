#include <stdio.h>
#include <stdlib.h>

int main() {
    int option;
    int soma = 0;
    do {
        int quant;
        printf("Insira a quantidade de elementos que deseja inserir no array: ");
        scanf("%d", &quant);

        if (quant <= 0) {
            printf("Insira um valor válido maior que zero.\n");
            return 1;  // Retornar um código de erro para indicar uma saída anormal
        }

        int *array = (int *)malloc(quant * sizeof(int));

        for (int c = 0; c < quant; c++) {
            printf("Insira o elemento %d: ", c + 1);
            scanf("%d", &array[c]);
            soma = array[c] + soma;
        }

        printf("Array final: [");
        for (int c = 0; c < quant; c++) {
            printf("%d", array[c]);
            
            if (c < quant - 1) {
                printf(", ");
            }
        }
        printf("]\n");

        printf("Soma dos elementos do array %d \n ", soma);
        free(array);

        printf("Deseja finalizar o programa? [1-sim/2-nao]: ");
        scanf("%d", &option);

    } while (option == 2);

    return 0;  // Indicar que o programa foi concluído com sucesso
}