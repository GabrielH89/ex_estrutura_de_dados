//ENDEREÇO DE MEMÓRIA
//Quando uma variável é criada em c, um endereço de memória é atribído a ela.
//O endereço de memória é o local onde a variável é armazenada no pc
//Ponteiros são importantes porque permitem manipular o dado na memóra do pc, reduzindo o códifo e melhorando a performance
/*#include <stdio.h>
int main() {
    //Capturando o enedreço de memória
    int number = 10; char name = "Gabriel"; int number2 = 10;
    printf("%p\n", &number);
    printf("%p\n", &name);
    printf("%p\n", &number2);
}*/

//PONTEIROS
/*#include <stdio.h>

int main() {
    int number = 7;
    int* ptr = &number;
    char name = "Gabriel";
    char* ptr2 = &name;

    printf("Variable value: %d\n ", number);
    printf("Memory adress: %p\n", &number);
    printf("Pointer: %p\n", ptr);
    printf("Deference: %d\n", *ptr);
    printf("Memory adress of Gabriel %p\n ", &name);
    printf("Pointer of Gabriel %c\n ", *ptr2);

    /*int* values = {2, 3, 4, 5, 6, 1};
    int valuesLength = sizeof(values) / sizeof(values[0]);

    for(int c=0; c<valuesLength; c++){
        printf("%p\n", values[c]);
    } 
}*/

/*#include <stdio.h>

int main() {
    /*int n1 = 24;
    int n2 = 12;
    int n3 = 2;
    printf("%p / %p / %p ", n1, n2, n3);*/

    /*int n1 = 4;
    int *pointer = &n1;
    char nome = "Gabriel";
    char *ptNome = &nome;
    printf("Variable: %d \n ", n1);
    printf("Memory adress: %p \n ", n1);
    printf("Pointer: %p \n ", pointer);
    printf("Nome: %s \n ", nome);
    printf("Nome adress: %p \n ", nome);
    printf("Nome pointer: %p \n ", ptNome);
}*/

#include <stdio.h>
#include <math.h>

/*int main() {
    int n1 = 4;
    int *pointer = &n1;
    char name1 = 'Gabriel';
    float f1 = 5.7;

    printf("Variable: %d \n", n1);
    printf("Memory address of n1: %p \n", &n1);
    printf("Pointer of n1: %p \n", pointer);
    printf("Adress of pointer %p \n", &pointer);
    printf("Valor apontado por pointer: %d \n", *pointer);

}*/

int main() {
    float n1 = 4.5;
    int *pointer = &n1;
    printf("Value o n1: %f \n", n1);
    printf("Memory adress of n1: %p \n", &n1);
    printf("Pointer of n1: %p \n", pointer);
    printf("Adress of pointer: %p \n", &pointer);
    printf("Variable from pointer %f \n", *pointer);
}
















