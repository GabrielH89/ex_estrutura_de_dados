#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    char sexo;
}Person;

int main() {
    Person p1;
    p1.id = 4;
    strcpy(p1.name, "Gabriel");
    p1.sexo = 'M';

    printf("Id: %d\n ", p1.id);
    printf("Name: %s\n", p1.name);
    printf(" Sexo: %c\n", p1.sexo);
}



