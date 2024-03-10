//SOBRE O OPERADOR ->
#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person p1 = {"Gabriel", 25};
    struct Person *pointer = &p1;

    printf("Name %s\n ", pointer->name);
    printf("Age: %d\n ", pointer->age);
}
