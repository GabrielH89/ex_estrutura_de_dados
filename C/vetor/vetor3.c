#include <stdio.h>
#include <math.h>

int isSorted(int array[], int size){
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

    printf("==== ARRAY ORDERED ==== \n [ ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int binarySearch(int array[], int size, int value){
    int inicio = 0;
    int fim = size - 1;
    int found = 0;

    while(inicio <= fim){
        int middle = (inicio + fim) / 2;
        if(value == array[middle]){
            found = 1;
            printf("The value %d was found at position %d \n", value, middle);
            break;
        }else if (value < array[middle]){
            fim = middle - 1;
        }else{
            inicio = middle + 1;
        }
    }

    if(!found){
        printf("The value %d was not found \n", value);
    }
}

int sumArrayElements(int array[], int size){
    int sumTotal = 0;
    for(int c=0; c<size; c++){
        sumTotal = array[c] + sumTotal;
    }
    printf("Soma total dos elementos do array: %d \n", sumTotal);
}

int quantParImpar(int array[], int size){
    int qPar = 0, qImpar = 0;
    for(int c=0; c<size; c++){
        if(array[c] % 2 == 0){
            qPar++;  
        }else{
            qImpar++;
        }
    }
    printf("Quant de elementos pares: %d \n", qPar);
    printf("Quant de elementos impares: %d \n", qImpar);
}

int main() {
    int option;
    do{
        int size, value;
        printf("Insert the size of array: \n");
        scanf("%d", &size);

        int vetor[size];

        for(int c=0; c<size; c++){
            printf("Insert the value for position %d \n", c);
            scanf("%d", &vetor[c]);
        }

        printf("==== COMPLETE ARRAY ==== \n [ ");
        for(int c=0; c<size; c++){
            printf("%d ", vetor[c]);
        }
        printf("] \n");

        if(!isSorted(vetor, size)){
            selectionSort(vetor, size);
        }

        sumArrayElements(vetor, size);
        quantParImpar(vetor, size);

        printf("Insert a value to find on array: \n");
        scanf("%d", &value);

        binarySearch(vetor, size, value);

        printf("Would you like finish this program [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}

