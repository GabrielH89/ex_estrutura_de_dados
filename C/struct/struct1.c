#include <stdio.h>
#include <math.h>
#include <string.h>//bibliotecas para importar funções string

typedef struct {
    char nome[100];//Nome pode ter, no máximo, 100 caracteres
    int idade;
    char sexo;
}Person1;

//Outra forma
struct Person2 {
    char nome[100];
    int idade;
    char sexo;
};

int main() {
    Person1 p1;
    struct Person2 p2;

    strcpy(p1.nome, "Gabriel");
    p1.idade = 25;
    p1.sexo = 'M';
    
    strcpy(p2.nome, "Samara");
    p2.idade = 22;
    p2.sexo = 'F';

    printf("PERSON 1 \n");
    printf("Nome: %s \nIdade: %d \nSexo: %c \n", p1.nome, p1.idade, p1.sexo);
    printf("PERSON 2 \n");
    printf("Nome: %s \nIdade: %d \nSexo: %c \n", p2.nome, p2.idade, p2.sexo);
}
