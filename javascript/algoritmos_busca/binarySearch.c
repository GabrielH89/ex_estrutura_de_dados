
#include <stdio.h>

void binarySearch(int value, int array[], int size) {
    int first = 0;
    int last = size - 1;
    int found = 0;

    while(first <= last) {
        int middle = (first + last) / 2;
        if(array[middle] == value) {
            found = 1;
            printf("Value %d found at position %d ", value, middle);
            break;
        }else if(array[middle] > value) {
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }
    if(!found) {
        printf("Value %d not found \n", value);
    }
}

int main() {
    int orderedArray[] = {1, 3, 5, 6, 8, 12, 13, 15, 16};
    int valueToFind = 15;
    int size = sizeof(orderedArray) / sizeof(orderedArray[0]);
    binarySearch(valueToFind, orderedArray, size);
}