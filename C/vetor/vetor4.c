#include <stdio.h>
#include <math.h>

int isOrdered(int array[], int size){
    for(int i=0; i<size - 1; i++){
        if(array[i] > array[i+1]){
            return 0;
        }
    }
    return 1;
}

int selectionSort(int array[], int size){
    for(int a=0; a<size-1; a++){
        int minIndex = a;
        for(int b=a+1; b<size; b++){
            if(array[minIndex] > array[b]){
                minIndex = b;
            }
        }
        int aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }

    printf("=== ARRAY ORDERED === \n[ ");
        for(int c=0; c<size; c++){
            printf("%d ", array[c]);
        }
    printf("] \n");

}

int binarySearch(int array[], int size, int value) {
    int inicio = 0;
    int fim = size - 1;
    int found = 0;
    while(inicio <= fim){
        int middle = (inicio + fim) / 2;
        if(value == array[middle]){
            found = 1;
            printf("The value %d was found in position %d \n", value, middle);
            break;
        }else if(value < array[middle]){
            fim = middle - 1;
        }else{
            inicio = middle + 1;
        }
    }
    if(!found){
        printf("The value %d was not found \n", value);
    }
}

int main() {
    int option;
    do{
        int size, value;
        printf("Insert the size of array \n");
        scanf("%d", &size);

        int vetor[size];

        for(int c=0; c<size; c++){
            printf("Insert the value for position %d \n ", c);
            scanf("%d", &vetor[c]);
        }

        printf("=== COMPLETE ARRAY === \n[ ");
        for(int c=0; c<size; c++){
            printf("%d ", vetor[c]);
        }
        printf("] \n");

        if(!isOrdered(vetor, size)){
            selectionSort(vetor, size);
        }else{
            printf("ARRAY JA ORDENADO \n");
        }

        printf("Insert a value to search on array \n");
        scanf("%d", &value);

        binarySearch(vetor, size, value);

        printf("Would you like finish the program? [1-Yes] \n");
        scanf("%d", &option);
    }while(option != 1);
}
