#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *items;
    int size;
}Set;

void initializeSet(Set *set) {
    set->items = NULL;
    set->size = 0;
}

bool has(Set *set, int element) {
    for(int c=0; c<set->size; c++){
        if(set->items[c] == element){
            return true;
        }
    }
    return false;
}

bool add(Set *set, int element) {
    if (!has(set, element)) {
        set->size++;
        set->items = realloc(set->items, set->size * sizeof(int));
        set->items[set->size - 1] = element;
        return true;
    }
    return false;
}

void printValues(Set *set) {
    printf("[");
    for (int i = 0; i < set->size; i++) {
        printf("%d", set->items[i]);
        if (i < set->size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    Set s1;
    
    initializeSet(&s1);
    add(&s1, 5);
    
    if (has(&s1, 5)) {
        printf("O elemento 5 esta presente no conjunto.\n");
    } else {
        printf("O elemento 5 nao esta presente no conjunto.\n");
    }

    // Liberando a memória alocada para os elementos do conjunto
    free(s1.items);
    printValues(s1.items);
}




