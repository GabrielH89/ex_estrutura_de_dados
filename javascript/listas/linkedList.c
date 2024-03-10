/*#include <stdio.h>

typedef struct Node {
    int n;
    struct Node* next;
}Node;

int main () {
    Node n1, element2;

    n1.n = 13;
    n1.next;
    n1.next = &element2;
    element2.n = 3;
    element2.next = NULL;

    printf("First element: %d \n", n1.n);
    printf("Second element: %d \n", n1.next->n);
}*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int n;
    struct Node* next;
}Node;

int main () {
    Node n1;

    //Atribui valor 13 para o campo n do primeiro nó da lista
    n1.n = 13;
    //Malloc: para alocar memória para o próximo nó da lista / sizeof: tamanho necessário para armazenar um nó
    n1.next = malloc(sizeof(Node));
    //É atribuido o valor 4 para o campo n do próximo nó da lista
    n1.next->n = 4;
    //O campo next do próxmo nó da lista contém valor NULL, o qual indica que é este é o último nó
    n1.next->next = NULL;

    printf("First element: %d \n", n1.n);
    printf("Second element: %d \n", n1.next->n);
    //free() libera a memória alocada para o próximo nó da lista encadeada, apontado pelo ponteiro n1.next
    free(n1.next);
    /*Isso significa que a lista ligada possui dois campos: o que contém o elemento (n) e o outro que 
    contém o ponteiro que aponta para o próximo nó da lista*/
}
