#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Um array de tamanho 10 como exemplo
    int novoElemento = 11;  // Novo elemento a ser adicionado
    int tamanhoArray = sizeof(array) / sizeof(array[0]);  // Calcula o tamanho do array

    // Verifica se há espaço suficiente para adicionar o novo elemento
    if (tamanhoArray < sizeof(array) / sizeof(array[0])) {
        // Adiciona o novo elemento na última posição
        array[tamanhoArray] = novoElemento;

        // Incrementa o tamanho do array
        tamanhoArray++;

        printf("Novo elemento adicionado com sucesso!\n");

        // Imprime o array atualizado
        for (int i = 0; i < tamanhoArray; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("Não há espaço suficiente para adicionar um novo elemento.\n");
    }

    return 0;
}
