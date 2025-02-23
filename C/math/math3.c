/*#include <stdio.h>
#include <math.h>

int main() {
    int value = 9, result = 1;

    for(int c=value; c>1; c--){
        result *= c;
        printf("%d * ", c); 
    }
    printf("1\n");

    printf("O fatorial de %d e %d ", value, result);
}*/


//TABUADA 
/*#include <stdio.h>

void calcTabuada(int value) {
    int soma = 0;
    for(int c=0; c<=10; c++) {
        int result = value * c;
        printf("%d X %d = %d \n", value, c, result);
        soma = result + soma;
    }
    printf("Soma dos resultados: %d \n", soma);
}

int main() {
    int option, value;

    do {
        printf("Insira valor para tabuada \n");
        scanf("%d", &value);
        calcTabuada(value);

        printf("Would you like finish the program? [1-YES] \n");
        scanf("%d", &option);

    }while(option != 1);
}*/

//FATORIAL
#include <stdio.h>

void calcFatorial(int value) {
    int result = 1;
    for(int c=value; c>1; c--) {
        result *= c;
        printf("%d * ", c);
    }
    printf("1\n");

    printf("Fatorial de %d e %d \n", value, result);
}

int main() {
    int option, value;
    do {
        printf("Insira um valor para calcular fatorial \n");
        scanf("%d", &value);

        calcFatorial(value);

        printf("Deseja finalizar o programa? [1-YES] \n");
        scanf("%d", &option);

    }while(option != 1);
}


























