#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    int id;
    char nome[100];
}Person;

int main() {
    Person p1;
    
    printf("Digite o id \n");
    scanf("%d", &p1.id);
    while (getchar() != '\n');

    printf("Digite o nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    p1.nome[strcspn(p1.nome, "\n")] = '\0';  // Remove a nova linha, se presente

    printf("Id: %d\n", p1.id);
    printf("Nome: %s\n", p1.nome);
}