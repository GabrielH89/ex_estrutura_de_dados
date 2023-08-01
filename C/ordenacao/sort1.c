#include <stdio.h>

int main() {
    int numbers[] = {9, 3, 7, 8, 1, 4};
    int lenght = sizeof(numbers) / sizeof(numbers[0]);

    for(int c=0; c<lenght; c++){
        printf("%d\n", numbers[c]);
    }


}


