#include <stdio.h>

void calcFatorial(int value) {
    int fatorial = 1;
    for(int c=value; c>=1; c--) {
        fatorial *= c;
        printf("%d * ", c);
    }
    printf("\n");

    printf("Fatorial de %d e %d ", value, fatorial);
}

int main() {
    calcFatorial(4);
}