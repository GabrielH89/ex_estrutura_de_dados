//O tamanho de um ponteiro em C pode variar dependendo da arquitetura do sistema onde o código está sendo executado. Em sistemas de 32 bits, é comum que um ponteiro tenha 4 bytes, e em sistemas de 64 bits, é comum que um ponteiro tenha 8 bytes.

/*#include <stdio.h>
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
}*/




/*#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n1 = 7;
    int *pointer = &n1;
    char name[3]; 
    
    printf("Size of n1: %d \n", sizeof(n1));
    printf("Size of name: %d \n", sizeof(name));
    printf("Memory adress of n1: %p \n", &n1);
    printf("Pointer of n1: %p \n", pointer);
    printf("Size of pointer %d  \n", sizeof(pointer));
    printf("Value of pointer %p \n", &pointer);
}*/

#include <stdio.h>
#include <math.h>

int main() {
    int n1 = 8;
    int memoryAdress = &n1;
    int *pointerN1 = memoryAdress;
    char name1 = 'Gabriel';

    printf("Variable n1: %d \n", n1);
    printf("Memory adresss of n1: %p \n", memoryAdress);
    printf("Pointer of variable n1: %p \n", pointerN1);
    printf("Size of n1 %d \n", sizeof(n1));
    printf("Size of name1 %d \n", sizeof(name1));
    printf("Size of n1 pointer %d \n", sizeof(pointerN1));
}





