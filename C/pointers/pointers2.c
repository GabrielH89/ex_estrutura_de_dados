#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 4;
    int *pointer = &n;     

    printf("Size of n: %d \n", n);
    printf("Memory adress of n: %p \n", &n);
    printf("Pointer of n: %p \n", pointer);
    printf("Adress of pointer %p \n", &pointer);
}