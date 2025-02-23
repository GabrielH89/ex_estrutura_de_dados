//Soma de valores EVEN(par) and ODD(ímpar)
#include <stdio.h>

int main() {
    int array[] = {3, 4, 1, 9, 4, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int sumEven = 0; int sumOdd = 0;
    int arrayEven[size];
    int evenCount = 0;

    for(int c=0; c<size; c++) {
        printf("%d ", array[c]);
        if(array[c] % 2 == 0) {
            sumEven = array[c] + sumEven;
            arrayEven[evenCount++] = array[c];
        }else{
            sumOdd = array[c] + sumOdd;
        }
    }

    printf("Sum of even values: %d \n", sumEven);
    printf("Sum of odd values: %d \n", sumOdd);

    printf("THE EVEN VALUES: ");
    for(int c=0; c<evenCount; c++) {
        printf("%d ", arrayEven[c]);
    }
    printf("\n");
}

