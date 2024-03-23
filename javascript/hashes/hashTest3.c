#include <stdio.h>
#include <math.h>

#define TAM 11

void initializeTable(int t[]) {
    for(int c=0; c<TAM; c++){
        t[c] = 0;
    }
}

int functionHash(int key) {
    return key % TAM;
}

void insert(int t[], int value) {
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

int delete(int t[], int key) {
    int id = search(t, key);
    if(id != -1){
        t[id] = 0;
        printf("Element %d deleted from position %d \n", key, id);
    }else{
        printf("Element %d not found \n", key);
    }
}

int print(int t[]) {
    for(int c=0; c<TAM; c++){
        printf("%d == %d \n", c, t[c]);
    }
}

int main() {
    int table[TAM];
    initializeTable(table);
    print(table);
}

