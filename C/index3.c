#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array[] = {1, 2, 4};
    int number = 4;
    int *pointerNumber = &number;
    printf("Memory adress of number: %p \n", &number);
    printf("Pointer of number: %p \n", pointerNumber);
    printf("Size of pointerNumber: %d \n", sizeof(pointerNumber));
}