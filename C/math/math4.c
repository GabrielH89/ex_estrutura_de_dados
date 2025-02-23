//MAIOR E MENOR VALOR
/*#include <stdio.h>

int main() {
    int array[] = {3, 1, 5, 8, 4, -4}; 
    int size = sizeof(array) / sizeof(array[0]);
    int bigger = array[0];
    int smaller = array[0];
    for(int c=0; c<size; c++) {
        if(array[c] > bigger) {
            bigger = array[c];
        }

        if(array[c] < smaller) {
            smaller = array[c];
        }
    }

    printf("The bigger value is %d \n", bigger);
    printf("The smaller value is %d \n", smaller);
}*/

//PAR OU ÍMPAR
/*#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {1, 4, 5, 8, 9, 12, 14, 20};
    int sizeArray = sizeof(array) / sizeof(array[0]);
    int par = 0; int impar = 0;
    for(int c=0; c<sizeArray; c++) {
        if(array[c] % 2 == 0) {
            par ++;
        }else{
            impar ++;
        }
    }

    printf("Quant numeros pares: %d \n", par);
    printf("Quant numeros impares: %d ", impar);

}*/

//VERIFICA SE O NÚMERO É PRIMO
/*#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if(number <= 1) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;

    for(int c=3; c*c<=number; c += 2) {
        if (number % c == 0) return false;
    }
    return true;
}

int main() {
    int option; int number;
    do {
        printf("Insert a number: \n");
        scanf("%d", &number);

        if(isPrime(number)) {
            printf("It's a prime number \n");
        }else{
            printf("It's not a prime number \n");
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}*/


//ANO BISSEXTO
/*#include <stdio.h>

int main() {
    int option, year;
    do {
        printf("Insert an year \n");
        scanf("%d", &year);

        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("It's leap year! \n");
        }else{
            printf("It's not leap year \n");
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}*/

//SOMA DOS VALORES DO ARRAY














