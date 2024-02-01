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

int main() {
    Person1 p1;
    Person1 p2;
    
    printf("Digite seu nome \n");
    fgets(p1.nome, 100, stdin);
    printf("Digite seu sexo: \n");
    scanf("%c", &p1.sexo);
    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);
    printf("Digite sua data de nascimento: dia, mes, ano \n");
    scanf("%d%d%d", &p1.dataN.day, &p1.dataN.month, &p1.dataN.year);

    printf("Nome: %s \nIdade: %d \nSexo: %c \n", p1.nome, p1.idade, p1.sexo);
    printf("Data de nascimento: %d/%d/%d \n", p1.dataN.day, p1.dataN.month, p1.dataN.year);
}



