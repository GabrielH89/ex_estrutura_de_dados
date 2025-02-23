/*#include <stdio.h>

int main() {
    for(int i=0; i<=10; i++){
        if(i%2 == 0){
            printf("%d\n ", i, " é par");
        }
    }
}*/

/*#include <stdio.h>

int main() {
    int number1 = 4; 
    char name = "Gabriel";
    long age = 25;
    float floatNumber = 2.5; double doubleNumber = 2.5; 
    printf("Size of int %zu bytes \n ", sizeof(number1));
    printf("Size of char %zu bytes \n ", sizeof(name));
    printf("Size of long %zu bytes \n ", sizeof(age));
    printf("Size of float %zu bytes \n ", sizeof(floatNumber));
    printf("Size of double %zu bytes \n ", sizeof(doubleNumber));

    int numbers[] = {2, 3, 4, 4};

    printf("Size of array numbers %zu bytes ", sizeof(numbers));
}*/

/*#include <stdio.h>

int main() {
    int c; int i;

    //O loop para quando o c é igual a 4 
    for (c = 0; c < 10; c++) {
        if (c == 4) {
            break;
        }
         printf("%d\n", c);
    }
    //O loog corta quando o i é igual a 4, ignora-o, e continua.
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }
}*/

/*#include <stdio.h>

int main() {
    /*int numbers[] = {1, 2, 4, 6, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int c=0; c<length; c++){
        printf("%d\n", numbers[c]);
    }*/

    //Strings 
    /*char n1 = 'H'; char n2 = 'I';

    printf("%i %i\n", n1, n2);*/

    /*char name[100];

    printf("What's your name? \n");
    if (scanf("%99s", name) == 1) { // Limitamos a leitura a 99 caracteres (deixando 1 espaço para o caractere nulo)
        int n = strlen(name);
        printf("The length of your name is: %i\n", n);
    } else {
        printf("Failed to read your name.\n");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int value; int res=1;
    printf("Insira um valor para calcular seu fatorial\n");
    scanf("%d", &value);
    for(int c=value; c>=1; c--){
        res = c * res;
    }
    printf("O fatorial do valor é %d ", res);
}







