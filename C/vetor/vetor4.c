#include <stdio.h>
#include <math.h>

int isOrdered(int array[], int size) {
    for(int i=0; i<size; i++){
        if(array[i-1] > array[i]){
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
    printf("==== ORDERED ARRAY ==== \n [ ");
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
        if(array[middle] == value){
            found = 1;
            printf("The value %d was found in position %d \n", value, middle);
            break;
        }else if(array[middle] > value){
            fim = middle - 1;
        }else{
            inicio = middle + 1;
        }
    }
    if(!found){
        printf("The value %d not found \n ", value);
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
            printf("Insert the element for position %d: \n", c);
            scanf("%d", &vetor[c]);
        }

        printf("==== COMPLETE ARRAY ==== \n [ ");
        for(int c=0; c<size; c++){
            printf("%d ", vetor[c]);
        }
        printf("] \n");

        if(!isOrdered(vetor, size)){
            selectionSort(vetor, size);
        }

        printf("What value would you like to search? \n");
        scanf("%d", &value);

        binarySearch(vetor, size, value);

        printf("Would you like finish this program? [1-Yes] \n");
        scanf("%d", &option);
    }while(option != 1);
}