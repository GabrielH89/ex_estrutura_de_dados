#include <stdio.h>
#include <math.h>

void multiplyValue(int array[], int size, int value){
    for(int c=0; c<size; c++){
        if(array[c] > value){
            array[c] *= 3;
        }else{
            array[c] *= 2;
        }
    }

    printf("=== COMPLETE ARRAY === \n[ ");
    for(int c=0; c<size; c++){
        printf("%d ", array[c]);
    }
    printf("]\n");
}

int main() {
    int size;

    printf("Insert the size of array: \n");
    scanf("%d", &size);

    int array[size];

    for(int c=0; c<size; c++){
        printf("Insert the value for pisition %d \n", c);
        scanf("%d", &array[c]);
    }

    int value;
    printf("Insert the value to search");
    scanf("%d", &value);  

    multiplyValue(array, size, value);  

}
