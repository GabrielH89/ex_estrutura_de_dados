#include <stdio.h>
#include <math.h>

#define TAM 11

void initializeTable(int t[]) {
    for (int c = 0; c < TAM; c++) {
        t[c] = 0;
    }
}

int functionHash(int key) {
    return key % TAM;
}

void insert(int t[], int value) {
    int id = functionHash(value);
    while (t[id] != 0) {
        id = (id + 1) % TAM;
    }
    t[id] = value;
}

int search(int t[], int key) {
    int id = functionHash(key);
    while (t[id] != 0) {
        if (t[id] == key) {
            return id;
        } else {
            id = (id + 1) % TAM;
        }
    }
    return -1;
}

void printTable(int t[]) {
    for (int c = 0; c < TAM; c++) {
        printf("%d == %d \n", c, t[c]);
    }
}

int main() {
    int table[TAM], option, value, searchedValue;
    initializeTable(table);

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Buscar valor\n\t3 - Imprimir tabela\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Insira o valor que deseja adicionar: ");
                scanf("%d", &value);
                insert(table, value);
                break;
            case 2:
                printf("Digite o valor que deseja pesquisar na tabela: ");
                scanf("%d", &value);
                searchedValue = search(table, value);
                if (searchedValue != -1) {
                    printf("O valor %d foi encontrado na posição %d.\n", value, searchedValue);
                } else {
                    printf("Valor %d não encontrado.\n", value);
                }
                break;
            case 3:
                printTable(table);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (option != 0);

    return 0;
}
