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

void insert(int t[], int value){
    int id = functionHash(value);
    while(t[id] != 0){
        id = (id + 1) % TAM;
    }
    t[id] = value;
}

int search(int t[], int key) {
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

void delete(int t[], int key) {
    int id = search(t, key);
    if(id != -1){
        t[id] = 0;
        printf("Element %d deleted from position %d \n", key, id);
    }else{
        printf("Element %d was not found to delete \n", key);
    }
}

void print(int t[]) {
    for(int c=0; c<TAM; c++){
        printf("%d == %d \n", c, t[c]);
    }
}

int main() {
    int table[TAM];
    initializeTable(table);
    insert(table, 11);
    insert(table, 38);
    insert(table, 24);
    insert(table, 29);
    delete(table, 38);
    delete(table, 24);

    print(table);
    int valueSearch = 38;
    int position = search(table, valueSearch);
    if(position != -1){
        printf("Value %d was found at position %d \n", valueSearch, position);
    }else{
        printf("Value %d was not found \n", valueSearch);
    }
}
