#include <stdio.h>


int main() {
    int size, value;
    int repetidos = 0;
    printf("Insert the size of array \n");
    scanf("%d", &size);

    int array[size];

    for(int c=0; c<size; c++) {
        printf("Insert a value for position %d \n", c);
        scanf("%d", &array[c]);

    }

    for(int a=0; a<size; a++) {
        for(int b=a+1; b<size; b++){
            if(array[a] == array[b]) {
                repetidos++;
                break;
            }
        }
    }
   
    printf("Numeros repetidos %d \n", repetidos);
}
