/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char word[100];
    //scanf("%100[^\n]", word);
    //printf("%s\n", word);

    //Ao usar o nome de um array em uma expressão, ele é implicitamente convertido para o endereço de memória do primeiro elemento do array. Portanto, você pode dizer que um array completo recebe apenas um endereço de memória, que é o endereço do primeiro elemento.
    //O NOME DO VETOR JÁ É UM PONTEIRO, POIS JÁ POSSUI O ENDEREÇO DE MEMÓRIA DA PRIMEIRA POSIÇÃO
    printf("%p\n", word);
    printf("%p\n", &word);
    printf("%p\n", &word[0]);
}*/

//VETOR É SEMPRE UM PONTEIRO?
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void impress(int vet[], int tam) {
    int c;
    for(c=0; c<tam; c++){
        printf("%d ", vet[c]);
        printf("\n");
    }
}

void test(int vet[], int tam) {
    int c;
    for(c=0; c<tam; c++){
        vet[c] = vet[c] * 2;
        printf("\n");
    }
}

int main() {
    int vetor[3] = {12, 6, 17};
    impress(vetor, 3);
    test(vetor, 3);
    impress(vetor, 3);
}



