#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TAM 31

void initializeTable(int t[]) {
    int i;
    for(i=0; i<TAM; i++) {
        t[i] = 0; // Inicializa a tabela com 0
    }
} 

int functionHash(int key) {
    return key % TAM;//Retorna o resto da divisão da chave pelo 
}

void insert(int t[], int value) {
    int id = functionHash(value);
    while(t[id] != 0) {
        id = (id + 1) % TAM; // Incrementa o índice circularmente
    }
    t[id] = value;
}

int busca(int t[], int key) {
    int id = functionHash(key);
    while(t[id] != 0) {
        if(t[id] == key) {
            return id; // Retorna a posição do elemento encontrado
        } else {
            id = (id + 1) % TAM; // Incrementa o índice circularmente
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

void print(int t[]) {
    for(int i=0; i<TAM; i++) {
        printf("%d = %d \n", i, t[i]);
    }
}

int main() {
    int table[TAM], option, value, retorno;

    initializeTable(table);

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Buscar\n\t3 - Imprimir\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\t Qual valor deseja inserir?");
                scanf("%d", &value);
                insert(table, value);
                break;
            case 2: 
                printf("\t Qual valor deseja buscar?");
                scanf("%d", &value);
                retorno = busca(table, value);
                if(retorno != -1) {
                    printf("Valor encontrado na posicao %d\n ", retorno);
                } else {
                    printf("Valor nao encontrado \n");
                }
                break;
            case 3:
                print(table); 
                break;
            default: 
                printf("Invalid option \n");
        }
    } while(option != 0);

    return 0;
}
