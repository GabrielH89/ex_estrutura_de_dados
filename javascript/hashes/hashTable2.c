#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TAM 11

void initializeTable(int t[]) {
    for(int c = 0; c < TAM; c++) {
        t[c] = 0;
    }
}

int hashFunction(int key) {
    return key % TAM;
}

void insert(int t[], int value) {
    int id = hashFunction(value);
    while(t[id] != 0) {
        id = (id + 1) % TAM;
    }
    t[id] = value;
}

int search(int t[], int key) {
    int id = hashFunction(key);
    while(t[id] != 0) {
        if(t[id] == key) {
            return id;
        }
        id = (id + 1) % TAM;
    }
    return -1;
}

void printTable(int t[]) {
    for(int c = 0; c < TAM; c++) {
        printf("%d == %d\n", c, t[c]);
    }
}

int main() {
    int table[TAM], option, value, position;

    initializeTable(table);

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Buscar\n\t3 - Imprimir\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\tQual valor deseja inserir? ");
                scanf("%d", &value);
                insert(table, value);
                break;
            case 2: 
                printf("\tQual valor deseja buscar? ");
                scanf("%d", &value);
                position = search(table, value);
                if(position != -1) {
                    printf("Valor encontrado na posição %d\n", position);
                } else {
                    printf("Valor não encontrado\n");
                }
                break;
            case 3:
                printTable(table); 
                break;
            default: 
                printf("Opção inválida\n");
        }
    } while(option != 0);

    return 0;
}
