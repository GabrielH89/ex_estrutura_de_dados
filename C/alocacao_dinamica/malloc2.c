#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char *name;
    int number;

    //Alocar dinamicamente 3 bytes de memória para a variavel name
    name = (char *)malloc(3);
    
    //Alocar dinamicamente 

    printf("Insert your name: \n");
    fgets(name, 3, stdin);

    printf("Name: %s \n", name);

    free(name);
}

