#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
}Person;

Person * hash_table[TABLE_SIZE];

unsigned int hash(char *name) {
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for(int c=0; c<length; c++){
        hash_value += name[c];
        hash_value = (hash_value * name[c]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table() {
    for(int c=0; c<TABLE_SIZE; c++){
        hash_table[c] = NULL;
    }
    //table is empty
}

void print_table() {
    for(int c=0; c<TABLE_SIZE; c++){
        if(hash_table[c] == NULL) {
            printf("\t%i\t----\n", c);
        }else{
            printf("\t%i\t%s\n", hash_table[c]->name);
        }
    }
}

bool hash_table_insert(person *p){
    if(p == NULL) return false;
    int index = hash(p->name);
    if(hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p;
    return true; 
}

int main() {
    Person p1;

    init_hash_table();
    print_table();

    /*printf("Gabriel => %u\n", hash("Gabriel"));
    printf("Miguel => %u\n", hash("Miguel"));
    printf("Samara => %u\n", hash("Samara"));
    printf("Luiz => %u\n", hash("Luiz"));
    printf("Igor => %u\n", hash("Igor"));
    printf("Karol => %u\n", hash("Karol"));
    printf("Alice => %u\n", hash("Alice"));
    printf("Thais => %u\n", hash("Thais"));
    printf("Paula => %u\n", hash("Paula"));*/
}




