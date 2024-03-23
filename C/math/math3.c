#include <stdio.h>
#include <math.h>

int main() {
    int value = 9, result = 1;

    for(int c=value; c>1; c--){
        result *= c;
        printf("%d * ", c); 
    }
    printf("1\n");

    printf("O fatorial de %d e %d ", value, result);
}