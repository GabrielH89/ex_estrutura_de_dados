/*#include <stdio.h>

int main() {
    int array[] = {1, 5, 9, 4, 12, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int lowersBiggerThanSuccessors = 0;

    for(int c=1; c<size; c++) {
        if(array[c-1] > array[c]) {
            lowersBiggerThanSuccessors ++;
        }
    }

    printf("Lowers bigger than successors %d \n", lowersBiggerThanSuccessors);
}*/

//Quantos valores iguais e mostrar quais são eles 
/*#include <stdio.h>

int main() {
    int array[] = {1, 5, 3, 1, 14, 5, 7, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int equalValues = 0;

    // Usar um array para marcar os elementos já verificados
    int checked[size];
    for (int i = 0; i < size; i++) {
        checked[i] = 0; // Inicializa o array de marcadores
    }

    printf("Equal values: ");
    for (int i = 0; i < size; i++) {
        if (checked[i] == 1) {
            continue; // Pula se o valor já foi verificado
        }

        int foundDuplicate = 0;
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                foundDuplicate = 1;
                checked[j] = 1; // Marca o elemento como verificado
            }
        }

        if (foundDuplicate) {
            equalValues++;
            printf("%d ", array[i]);
        }
    }

    printf("\nTotal equal values: %d\n", equalValues);
    return 0;
}*/






