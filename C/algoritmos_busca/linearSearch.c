//Busca linear
/*#include <stdio.h>

int main() {
    int array[] = {2, 3, 4, 10, 4, 23};
    int arrayLength = sizeof(array) / sizeof(array[0]); 

    for(int c=0; c<arrayLength; c++){
        printf("%d\n", c);
        if (array[c] == 10){
            printf("The number %d was found at the position %d of array \n", array[c], c);
        }
    }
}*/

//Outro exemplo de busca linear
/*#include <stdio.h>
#include <string.h>

int main() {
    int numbers[] = {10, 30, 50, 20, 80, 90, 30, 43, 21};
    int numbersLength = sizeof(numbers) / sizeof(numbers[0]); 
    int n; int option;
    do{
        printf("Insert a number to search \n");
        scanf("%d", &n);

        for(int c=0; c<numbersLength; c++){
            if(numbers[c] == n) {
                printf("The %d was found ", n);
                return 0;//Retorno com sucesso
            }
        }
        printf("The number %d was not found.\n", n);
        return 1;//Retorno com alguma falha

        printf("Deseja encerrar o porgrama? [1-Sim/2-Não]\n");
        scanf("%d", &option);
    }while(option == 2); 
}*/



