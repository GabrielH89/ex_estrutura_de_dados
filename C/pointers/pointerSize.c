//O tamanho de um ponteiro em C pode variar dependendo da arquitetura do sistema onde o código está sendo executado. Em sistemas de 32 bits, é comum que um ponteiro tenha 4 bytes, e em sistemas de 64 bits, é comum que um ponteiro tenha 8 bytes.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //O valores de p, p2, etc, sempre vão retonar 4, independente do tipo do ponteiro, uma vez que todos eles
    //recebem um endereço de memória.
    int *p;
    char *p2;

    printf("Size of int: %d\n", sizeof(int));
    printf("Size of pointer %d\n", sizeof(p2));
    printf("Size of char: %d\n", sizeof(char));
    printf("Size of float: %d\n", sizeof(float));
}

