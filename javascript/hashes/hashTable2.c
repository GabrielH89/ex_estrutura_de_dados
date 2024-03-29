#include <stdio.h>
#include <math.h>

#define TAM 10

void initializeTable (int t[]) {
    for(int c=0; c<TAM; c++){
        t[c] = 0;
    }    
}

int functionHash(int key) {
    return key % TAM;
}

void insert(int t[], int value){
    int id = functionHash(value);
    while(t[id] != 0){
        id = (id + 1) % TAM;
    }
    t[id] = value;
}

int search(int t[], int key){
    int id = functionHash(key);
    while(t[id] != 0){
        if(t[id] == key){
            return id;
        }else{
            id = (id + 1) % TAM;
        }
    }
    return -1;
}

void print(int t[]){
    for(int c=0; c<TAM; c++){
        printf("%d = %d \n", c, t[c]);
    }
}

int main() {
    int table[TAM];
    initializeTable(table);

    insert(table, 5);
    insert(table, 13);
    insert(table, 24);
    insert(table, 56);
    printf("Valor pesquisado: ");
    int valor;
    scanf("%d", &valor);
    int indice = search(table, valor);
    if(indice != -1) {
        printf("O valor %d foi encontrado no índice %d da tabela.\n", valor, indice);
    } else {
        printf("O valor %d não foi encontrado na tabela.\n", valor);
    }
    return 0;
}