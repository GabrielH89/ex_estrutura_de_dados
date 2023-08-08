//ENDEREÇO DE MEMÓRIA
//Quando uma variável é criada em c, um endereço de memória é atribído a ela.
//O endereço de memória é o local onde a variável é armazenada no pc
//Ponteiros são importantes porque permitem manipular o dado na memóra do pc, reduzindo o códifo e melhorando a performance
/*#include <stdio.h>
int main() {
    //Capturando o enedreço de memória
    int number = 10; char name = "Gabriel";
    printf("%p\n", &number);
    printf("%p\n", &name);
}*/

//PONTEIROS
#include <stdio.h>

int main() {
    /*int number = 7;
    int* ptr = &number;

    printf("Variable value: %d\n ", number);
    printf("Memory adress: %p\n", &number);
    printf("Pointer: %p\n", ptr);
    printf("Deference: %d\n", *ptr);*/

    int* values = {2, 3, 4, 5, 6, 1};
    int valuesLength = sizeof(values) / sizeof(values[0]);

    for(int c=0; c<valuesLength; c++){
        printf("%p\n", values[c]);
    } 
}










