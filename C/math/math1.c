#include <stdio.h>
#include <math.h>

int main() {
    int option, number;

    do {
        printf("[1] Para calcular fatorial \n");
        printf("[2] Para calcular tabuada \n");
        printf("[3] Para sair do programa \n");
        scanf("%d", &option);

        switch(option) {
            case 1: 
                printf("==== FATORIAL ==== \n");
                printf("Insert a number \n");
                scanf("%d", &number);
                int fatorial = 1;
                for(int c=number; c>=1; c--) {
                    fatorial *= c;
                }
                printf("Fatorial from %d is %d \n", number, fatorial);
            break;
            case 2: 
                printf("Insert a number \n");
                scanf("%d", &number);
                int tabuada;
                printf("TABUADA DE %d \n", number);
                for(int c=1; c<=10; c++) {
                    int tabuada = number * c;
                    printf("%d X %d = %d \n", number, c, tabuada);       
                }
            break;
        }
    }while(option != 3);
   
}
