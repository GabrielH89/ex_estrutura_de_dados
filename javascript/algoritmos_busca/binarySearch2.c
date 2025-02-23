#include <stdio.h>
#include <math.h>

void linearSearch(int array[], int size, int value) {
    int attempts = 0;
    for(int c=0; c<size; c++) {
        attempts ++;
        if(value == array[c]) {
            printf("Value %d found in position %d \n", value, c);
        }
    }
    printf("Total attempts: %d\n", attempts);
}

void binarySearch(int array[], int size, int value ) {
    int inicio = 0;
    int fim = size - 1;
    int found = 0;
    int attempts = 0;

    while(inicio <= fim) {
        attempts++;
        int middle = (inicio + fim) / 2;
        if(array[middle] == value) {
            found = 1;
            printf("Element %d found in position %d \n", value, middle);
            printf("Total attempts: %d\n", attempts);
            break;
        }else if(array[middle] > value) {
            fim = middle - 1;
        }else{
            inicio = middle + 1;
        }
    }
    if(!found) {
        printf("Element %d not found \n");
    }
}

int main() {
    int array[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 13;

    printf("===== LINEAR SEARCH ===== \n");
    linearSearch(array, size, value);
    printf("===== BINARY SEARCH ===== \n");
    binarySearch(array, size, value);

}

