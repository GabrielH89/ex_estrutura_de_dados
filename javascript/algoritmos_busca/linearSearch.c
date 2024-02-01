
/*int main() {
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

/*#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {3, 1, 6, 8};
    int n = sizeof(array)/sizeof(array[0]);
    int value = 18; int found = 0;
    for(int c=0; c<n; c++){
        if(value == array[c]){
            found = 1;
            printf("Value %d was found at position %d ", value, c);
            break;
        }
    }

    if(!found){
        printf("The value %d was not found ", value);
    }
}*/


