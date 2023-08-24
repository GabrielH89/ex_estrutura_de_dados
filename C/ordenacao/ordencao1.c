/*#include <stdio.h>

int main() {
    int numbers[] = {9, 3, 7, 8, 1, 4};
    int lenght = sizeof(numbers) / sizeof(numbers[0]);

    for(int c=0; c<lenght; c++){
        printf("%d\n", numbers[c]);
    }
}*/

/*#include <stdio.h>

int main() {
    int array[] = {4, 2, 0, 1, 14, 6, 9, 3};
    int sizeArray = sizeof(array) / sizeof(array[0]); 
    int less = array[0]; int biggest = array[0]; int posLess; int posBiggest;
    for(int c=0; c<sizeArray; c++){
        if(array[c] < less) {
            less = array[c];
            posLess = c;
        }

        if(array[c] > biggest) {
            biggest = array[c];
            posBiggest = c;
        }
    }

    printf("The less element of array is %d at the position %d \n", less, posLess);
    printf("The biggest element of array is %d at the position %d \n", biggest, posBiggest);
}*/

#include <stdio.h>

int main() {
    int list[] = {3, 8, 2, 5, 14, 4};
    int size = sizeof(list) / sizeof(list[0]);

   for (int c = 0; c <size; c++) {
        if (list[c] % 2 == 0) {
            printf("%d é par\n", list[c]);
        } else {
            printf("%d é ímpar\n", list[c]);
        }
    }

}










