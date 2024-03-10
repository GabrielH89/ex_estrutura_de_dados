#include <stdio.h>

int binarySearch(int array[], int size, int value) {
    int inicio = 0;
    int fim = size - 1;

    while (inicio <= fim) {
        int middle = (inicio + fim) / 2;
        if (value == array[middle]) {
            return middle; // Retorna a posição se o valor for encontrado
        } else if (value < array[middle]) {
            fim = middle - 1;
        } else {
            inicio = middle + 1;
        }
    }
    return -1; // Retorna -1 se o valor não for encontrado
}

void multiplySmallerValue(int array[], int position){
    for(int c=0; c<position; c++){
        array[c] *= 2;
    }
}

void multiplyGreaterValue(int array[], int position, int size){
    for(int c=position + 1; c<size; c++){
        array[c] *= 3;
    }
}


int main() {
    int value;
    int array[] = {3, 4, 6, 7, 8, 12, 13, 14};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Insert a value: ");
    scanf("%d", &value);

    int position = binarySearch(array, n, value);    

    if(position != -1){
        multiplySmallerValue(array, position);
        multiplyGreaterValue(array, position, n);
        printf(" ARRAY COMPLETO \n [");
        for(int c=0; c<n; c++){
            printf("%d ", array[c]);
        }
        printf("] \n");
    }else{
        printf("Value not found");
    }

    return 0;
}
