#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    char text[100];
}Message;

typedef struct {
    int day, month, year;
}Data;

typedef struct {
    int id;
    char name[100];
    char sexo;
    Data data;
    Message message;
}Person;

int main() {
    Person p1;

    p1.id = 1;
    strcpy(p1.name, "Gabriel");
    p1.sexo = 'M';
    p1.data.day = 16;
    p1.data.month = 6;
    p1.data.year = 1998;
    strcpy(p1.message.text, "This is the message");

    printf("Id: %d \n", p1.id);
    printf("Name: %s \n", p1.name);
    printf("Sexo: %c \n", p1.sexo);
    printf("Day: %d \n", p1.data.day);
    printf("Message: %s \n", p1.message.text);
    printf("Size of Data: %d \n", sizeof(p1.data));
}
