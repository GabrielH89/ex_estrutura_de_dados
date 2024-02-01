#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//MALLOC: memory alloc = alocação dinâmica de memória
//Retorna um ponteiro para a região de memória alocada ou NULL.

//CALLOC: (contiguous allocatio) aloca memória, assim como malloc, e a inicializa.
//preenchendo todos os bytes alocados com zeros. Isso garante que a memória alocada com calloc seja sempre inicializada.
//Recebe 2 parâmetros: 1 é aquantidade de elementos para os quais vou querer alocar memória

/*int main() {
    int *x;
    char *y;
    //x = malloc(sizeof(int));
    x = calloc(1, sizeof(int));
    y = calloc(1, sizeof(char));
    if(x){
        printf("Malloc with success \n");
        printf("X: %c \n", *y);//Lixo de memória 
        *y = "H";
        printf("X: %c \n", *y);//Região de memória apontada por x possui valor 40
    }else{
        printf("Malloc failed");
    }
}*/

int main() {
    int *vetor;
    int n;
    
    printf("Type of array size: \n");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));
    if(!vetor){
        printf("Impossible to create memory for vetor \n");
        return 1;
    }

    for(int c=0; c<n; c++){
        vetor[c] = c;
    }

    for(int c=0; c<n; c++){
       printf("%d \n", vetor[c]);
    }

    free(vetor); //Método para liberar a memória alocada
    return 0;
}



