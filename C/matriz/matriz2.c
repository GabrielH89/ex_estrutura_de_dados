#include <stdio.h>
#include <math.h>

int main() {
    int option; int value;
    int matriz[3][3];
    printf("PREENCHA A MATRIZ \n");
    for(int a=0; a<3; a++){
        for(int b=0; b<3; b++){
            printf("Insira o elemento para a posicao [%d][%d]: ", a, b);
            scanf("%d", &matriz[a][b]);
        }
    }
    
    do{
        printf("1 - Mostrar a matriz inteira \n");
        printf("2 - Mostrar primeira linha da matriz \n");
        printf("3 - Mostrar a diagonal da matriz \n");
        printf("4 - Pesquisar valor na matriz \n");
        printf("5 - Sair do programa \n");
        scanf("%d", &option);

        switch(option){
        case 1: 
            printf("==== MOSTRANDO MATRIZ ====\n");
            for(int a=0; a<3; a++) {
                for(int b=0; b<3; b++){
                    printf("%d ", matriz[a][b]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("==== MOSTRANDO A PRIMEIRA LINHA ==== \n");
                for(int a=0; a<=0; a++){
                    for(int b=0; b<3; b++){
                        printf("%d ", matriz[a][b]);
                    }
                    printf("\n");
                }
            break;
        case 3:
            printf("==== MOSTRANDO DIAGONAL DA MATRZ ==== \n");
            for(int a=0; a<3; a++){
                for(int b=0; b<3; b++){
                    if(a == b){
                        printf("%d ", matriz[a][b]);
                    }
                }
            }
            printf("\n");
            break;
        case 4:
            printf("Insira o valor que quer procurar: \n");
            scanf("%d", &value);
            int found = 0;
            for(int a=0; a<3; a++){
                for(int b=0; b<3; b++){
                    if(value == matriz[a][b]){
                        printf("Valor %d encontrado na posicao [%d][%d] da matriz \n", value, a, b);
                        found = 1;
                        break;
                    }
                }
            }
            if(!found){
                        printf("Valor %d nao encontrado \n", value);
            }
    }
    }while(option != 5);
}