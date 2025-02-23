#include <stdio.h>

int isOrdered(int array[], int size) {
    for(int i=0; i<size; i++) {
        if(array[i-1] > array[i]) {
           return 0;
        }
    }
    return 1;
}

void selectionSort(int array[], int size) {
    for(int a=0; a<size - 1; a++) {
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
    for(int c=0; c<size; c++) {
        printf("%d ", array[c]); 
    }
    printf("] \n");
}

void binarySearch(int array[], int size, int value) {
    int first = 0;
    int last = size - 1;
    int found = 0; int attempts = 0;

    while(first <= last) {
        attempts ++;
        int middle = (first + last) / 2;
        if(array[middle] == value) {
            found = 1;
            printf("Value %d found at pisition %d, after %d attempts \n", value, middle, attempts);
            break;
        }else if(array[middle] < value) {
            first = middle + 1;
        }else {
            last = middle - 1; 
        } 
    }

    if(!found) {
        printf("Value %d not found \n", value);
    }

}

int main() {
    int option, size, value;

    do {
        printf("Insert the size of array \n");
        scanf("%d", &size);

        int vetor[size];

        for(int c=0; c<size; c++) {
            printf("Insert value for position %d \n", c);
            scanf("%d", &vetor[c]);
        }

        printf("==== SHOWING ARRAY ==== \n [ ");
        for(int c=0; c<size; c++) {
            printf("%d ", vetor[c]); 
        }
        printf("] \n");

        if(!isOrdered(vetor, size)) {
            selectionSort(vetor, size);
        }
      
        printf("Which value woud you like search? \n");
        scanf("%d", &value);
        binarySearch(vetor, size, value);

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}


