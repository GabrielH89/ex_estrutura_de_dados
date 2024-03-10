#include <stdio.h>
#include <math.h>

int main() {
    int option;
    do{
        int size;
        int somaPar = 0; 
        int somaImpar = 0;
        printf("Insert the size os array: \n");
        scanf("%d", &size);

        int vetor[size];

        for(int c=0; c<size; c++){
            printf("Insert the value for the position: %d \n", c);
            scanf("%d", &vetor[c]);
            if(vetor[c] % 2 == 0){
                somaPar = vetor[c] + somaPar;
            }else{
                somaImpar = vetor[c] + somaImpar;
            }
        }

        printf("VETOR COMPLETO \n [" );
        for(int c=0; c<size; c++){
            printf("%d ", vetor[c]);
        }
        printf("]\n");
        printf("Sum of even values: %d \n", somaPar);
        printf("Sum of odd values: %d \n", somaImpar);
        printf("Would you like finish this program? [1-Yes] \n");
        scanf("%d", &option);
        getchar();//Limpa o buffer do teclado
    }while(option != 1);
}


