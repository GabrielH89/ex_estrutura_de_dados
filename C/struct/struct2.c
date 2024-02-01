#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    int idade;
}Person1;

int main() {
    Person1 p1;

    printf("Digite seu nome: \n");
    fgets(p1.nome, 100, stdin); //stdin é um ponteiro que representa o fluxo de entrada padrão, geralmente associado ao teclado. O termo "stdin" é uma abreviação de "standard input" (entrada padrão)
    printf("Digite F ou M para o seu sexo \n");
    scanf("%c", &p1.sexo);
    printf("Digite sua idade \n");
    scanf("%d", &p1.idade);

    printf("DADOS DA PESSOA \n");
    printf("Nome: %s \n", p1.nome);
    printf("Sexo: %c \n", p1.sexo);
    printf("Idade: %d \n", p1.idade);

}
