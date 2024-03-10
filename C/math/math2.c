#include <stdio.h>
#include <math.h>

int main() {
    int option, number, result=1;
    do{
        printf("Deseja calcular o fatorial de qual numero? \n");
        scanf("%d", &number);

        for(int c=number; c>=1; c--){
            result *= c;
        }

        printf("Fatorial de %d e igual a %d \n", number, result);

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}

