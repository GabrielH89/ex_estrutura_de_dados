#include <stdio.h>
#include <stdlib.h>

int main() {
    // MALLOC: alocação de memória: pede ao sistema operacional um bloco de memória de um dado tamanho
    // Retorna o ponteiro que aponta para o endereço desse bloco que foi alocado

    // Declaração do ponteiro
    int *pointer;

    // Aloca memória para o ponteiro
    pointer = (int *)malloc(10 * sizeof(int)); // Alocar memória para 10 inteiros

    // Verifica se a alocação de memória foi bem-sucedida
    if(pointer == NULL) {
        printf("Falha na alocação de memória\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Atribui um valor ao primeiro elemento do array alocado dinamicamente
    *pointer = 1000;

    // Imprime o valor do primeiro elemento do array
    printf("Valor do primeiro elemento: %d\n", *pointer);

    // Libera a memória alocada
    free(pointer);

    return 0;
 }
