//Passar struct como parâmetro para um procedimento
#include <stdio.h>
#include <math.h>
#include <string.h>

//Tem que ser criado antes do outro struct, uma vez que o código em c é comiplado de cima para baixo.
typedef struct {
    int day, month, year;
}Data_Nasc;

typedef struct {
    char nome[100];
    char sexo;
    int idade;
    Data_Nasc dataN;
}Person1;

typedef struct {
   
}Car;

void impressPerson(Person1 p) {
    printf("\tNome: %s", p.nome);
    printf("\tSexo: %c", p.sexo);
    printf("\tIdade: %d", p.idade);
    printf("\tData de nasc, %d/%d/%d", p.dataN.day, p.dataN.month, p.dataN.year);
}

//Função que lê os dados de uma pessoa 
Person1 readPerson() {
    Person1 p1;
    printf("Digite seu nome \n");
    fgets(p1.nome, 100, stdin);
    printf("Digite seu sexo: \n");
    scanf(" %c", &p1.sexo);
    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);
    printf("Digite sua data de nascimento: dia, mes, ano \n");
    scanf("%d%d%d", &p1.dataN.day, &p1.dataN.month, &p1.dataN.year);
    return p1;
}

int main() {
    Person1 p1;
    Car c1;

    p1 = readPerson();
    impressPerson(p1);
}



