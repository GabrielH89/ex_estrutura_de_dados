#include <stdio.h>
#include <math.h>

int isOrdered(int array[], int size) {
    for(int i=0; i<size; i++) {
        if(array[i-1] > array[i]) {
            return 0;
        }
    }
    return 1;
}

void selectionSort(int array[], int size) {
    for(int a=0; a<size-1; a++){
        int minIndex = a;
        for(int b=a+1; b<size; b++) {
            if(array[b] < array[minIndex]) {
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

void linearSearch(int array[], int size, int value) {
    int found = 0;
    int attempts = 0;
    for(int c=0; c<size; c++) {
        attempts ++;
        if(array[c] == value) {
            found = 1;
            printf("Value %d found in position %d, after %d attempts \n", value, c, attempts);
            break;
        }
    }
    if(!found) {
        printf("Value %d not found \n", value);
    }
}

void binarySearch(int array[], int size, int value) {
    int first = 0;
    int last = size - 1;
    int found = 0;
    int attempts = 0;

    while(first <= last) {
        attempts ++;
        int middle = (first + last) / 2;
        if(array[middle] == value) {
            found = 1;
            printf("Value %d found in position %d, after %d attempts \n", value, middle, attempts);
            break;
        }else if(array[middle] > value) {
            last = middle - 1;
        }else{
            first = middle  + 1;
        }
    }
    if(!found) {
        printf("Value %d not found \n", value);
    }
}

void takeBiggerSmallerValue(int array[], int size) {
    int bigger = array[0]; int smaller = array[0];
    for(int c=0; c<size; c++) {
        if(array[c] > bigger) {
            bigger = array[c];
        }else if(array[c] < smaller) {
            smaller = array[c];
        }
    }
    printf("Bigger value is %d\n", bigger);
    printf("Smaller value is %d\n", smaller);
}

int main() {
    int option, size, value, optionSwitch;

    do {
        printf("Insert the size of array \n");
        scanf("%d", &size);

        int vetor[size];

        for(int c=0; c<size; c++) {
            printf("Insert the value for position %d \n", c);
            scanf("%d", &vetor[c]);
        }

        printf("==== COMPLETE ARRAY ==== \n [ ");
        for(int c=0; c<size; c++){
            printf("%d ", vetor[c]);
        }
        printf("] \n");

        if(!isOrdered(vetor, size)) {
            selectionSort(vetor, size);
        }

        printf("[1] For linear and binary search search \n");
        printf("[2] To show smaller and bigger values \n");
        printf("[3] ");
        scanf("%d", &optionSwitch);

        switch(optionSwitch) {
            case 1:
                printf("==== LINEAR AND BINARY SEARCH ==== \n");
                printf("Insert the value you'd like to find \n");
                scanf("%d", &value);
                linearSearch(vetor, size, value);
                binarySearch(vetor, size, value);
            break;
            case 2: 
               printf("==== SMALLER AND BIGGER VALUE ==== \n");
               takeBiggerSmallerValue(vetor, size);
            break;
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
    
}