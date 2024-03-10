#include <stdio.h>
#include <math.h>

int main() {
    int option1, option2, number, res = 1;
    do{
        printf("[1] Para calcular tabuada \n [2] Para calcular fatorial \n ");
        scanf("%d", &option1);

        switch(option1){
            case 1: 
                printf("===== TABUADA ===== \n");
                printf("Deseja realizar a tabuada de qual numero? \n");
                scanf("%d", &number);
                for(int c=0; c<=10; c++){
                    int res = number * c;
                    printf("%d X %d = %d \n", number, c, res);
                }
                break;
            case 2: 
                printf("===== FATORIAL ===== \n");
                printf("Deseja calcular o fatorial de qual numero? \n");
                scanf("%d", &number);
                for(int c = number; c >= 1; c--){
                    res *= c;
                }
                printf("Fatorial de %d e %d \n", number, res);
                break;
            default: 
                printf("Opcao invalida");
                break;
        }
        printf("Would you like finish the program? [1-Yes] \n");
        scanf("%d", &option2);
    }while(option2 != 1);
}