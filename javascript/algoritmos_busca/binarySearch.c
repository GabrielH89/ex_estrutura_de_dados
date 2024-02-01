/*#include <math.h>

int main() {
    int value = 9;
    int array[] = {2, 4, 5, 7, 8, 9};
    int fim = sizeof(array) / sizeof(array[0]) - 1;
    int inicio = 0;
    int found = 0;

    while(inicio <= fim) {
        int meio = (inicio  + fim) / 2;
        if(array[meio] == value){
            found = 1;
            printf("The value %d was found at position %d \n", value, meio);
            break;
        }else if(array[meio] > value){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        } 
    }
    
    if(!found){
        printf("The value %d was not found ", value);
    }
}*/

/*#include <stdio.h>
#include <math.h>

void binarySearch(int value) {
    int array[] = {1, 2, 3, 6, 7};
    int fim = sizeof(array) / sizeof(array[0]) - 1;
    int inicio = 0;
    int found = 0;
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(array[meio] == value){
            found = 1;
            printf("The value %d was found at position %d ", value, meio);
            break;
        }else if(array[meio] > value){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    if(!found){
        printf("The value %d was not found ", value);
    }
}

int main() {
    binarySearch(7);
}*/

/*#include <stdio.h>
#include <math.h>

int binarySearch(int value) {
    int array[] = {1, 3, 4, 5, 7, 10};
    int fim = sizeof(array) / sizeof(array[0]) - 1;
    int inicio = 0;
    int found = 0;
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(array[meio] == value) {
            found = 1;
            printf("Value %d was found at position %d ", value, meio);
            break;
        }else if(array[meio] > value){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    if(!found){
        printf("Value %d was not found ", value);
    }
}

int main() {
   binarySearch(13);
}*/

#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {1, 4, 6, 7, 12, 14};
    int inicio = 0;
    int fim = sizeof(array)/sizeof(array[0]) - 1;
    int found = 0;
    int value = 11;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(value == array[meio]){
            found = 1;
            printf("The value %d was found at position %d \n", value, meio);
            break; 
        }else if(value < array[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    if(!found){
        printf("The value %d was not found ", value);
    }
}





