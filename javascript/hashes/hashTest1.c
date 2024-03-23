#include <stdio.h>
#include <math.h>

#define TAM 11

void initializeTable(int t[]){
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
        id = (id+1) % TAM;
    }
    t[id] = value;
}

int search(int t[], int key){
    int id = functionHash(key);
    while(t[id] != 0){
        if(t[id] == key){
            return id;
        }else{
            id = (id+1) % TAM;
        }
    }
    return -1;
}

void delete(int t[], int key){
    int id = search(t, key);
    if(id != -1){
        t[id] = 0;
        printf("Element %d deleted from position %d \n", key, key);
    }else{
        printf("Elemento %d no found on the table \n", key);
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
    insert(table, 24);
    insert(table, 41);
    insert(table, 11);
    delete(table, 11);
    print(table);
    int value = 11;
    int index = search(table, value);
    if(index != -1){
        printf("The value %d was found on position %d of the table \n", value, index);
    }else{
        printf("The value %d was not found \n", value);
    }

    /*int option;

    do{

        printf("Wooudl you like finish this program? [1-YES]");
        scanf("%d", &option);
    }while(option != 1);*/


}

