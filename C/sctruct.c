#include <stdio.h>

struct People {
    char name[50];
    int age;
    float heigth;
};

int main() {
    struct People people1;

    strcpy(people1.name, "Gabriel");
    people1.age = 25;
    people1.heigth = 1.78;

    printf("Name: %s\n", people1.name);
    printf("Age: %d\n ", people1.age);
}   















