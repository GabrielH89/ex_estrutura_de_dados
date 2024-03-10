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

unsigned int hash(char *name){
    return 5;
}

int main() {
    printf("Gabriel => %u\n", hash("Gabriel"));
}

