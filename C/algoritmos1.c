#include <stdio.h>

int main() {
    //Busca linear
    int array[] = {2, 3, 4, 10, 4, 23};
    int arrayLength = sizeof(array) / sizeof(array[0]); 

    for(int c=0; c<arrayLength; c++){
        printf("%d\n", c);
        if (array[c] == 10){
            printf("The number %d was found at the position %d of array \n", array[c], c);
        }
    }
}
