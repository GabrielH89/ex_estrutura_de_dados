#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *array;
    int sizeArray = 10;
    array = (int *)malloc(sizeArray* sizeof(int));

    if(array == NULL){
        printf("Memory allocation failed \n");
    }

    //Inicialização do array
    for(int c=0; c<6; c++) {
        array[c] = c + 1;
    }

    //Imprime os valores do array
    printf("Array elements \n [ ");
    for(int c=0; c<6; c++) {
        printf("%d ", array[c]);
    }
    printf("] \n");

    free(array);
}
