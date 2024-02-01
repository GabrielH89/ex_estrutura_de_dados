/*#include <stdio.h>

void main() {
    char hello[] = "Hello, world";
    printf("%s\n", hello);
}*/


//A linha #include <stdio.h> diz ao compilador que ele deve incluir a biblioteca arquivo-cabeçalho stdio.h. Neste arquivo existem declarações de funções úteis para entrada e saída de dados (std = standard, padrão em inglês; io = Input/Output, entrada e saída ==> stdio = Entrada e saída padronizadas
/*#include <stdio.h>

int main() {
    int n1 = 5; int n2 = 3;
    int soma = n1 + n2;
    printf("Hello, world \n");
    printf("Gabriel\n ");
    printf("%d", soma);
    return 0;
}*/

//Exemplo de interação com o usuário
/*#include <stdio.h>

int main() {
    int n1, n2;
    printf("Insert the first value: ");
    scanf("%d", &n1);
    printf("Insert the second value: ");
    scanf("%d", &n2);
    int soma = n1 + n2;
    printf("A soma é %d\n", soma);
}*/

/*#include <stdio.h>

int main() {
    char name; char last;
    printf("What' your name? \n");
    scanf("%s", &name);
    printf("What's your last name? \n");
    scanf("%s", &last);
    printf("Your name is %s %s\n", name, last);
    return 0;
}*/

//CONDITIONALS
/*#include <stdio.h>

int main() {
    int age;
    printf("Insert your age \n");
    scanf("%d", &age);

    if(age >= 18){
        printf("Maior");
    }else{
        printf("Menor");
    }
}*/

//WHILE
/*#include <stdio.h>

int main() {
    int value1; int value2; int option;
    do{
        printf("Deseja encerrar o programa [1]Sim [2]Não? \n");
        scanf("%d", &option);
        printf("Deseja contar a partir de quanto? \n");
        scanf("%d", &value1);
        printf("Até quanto? \n");
        scanf("%d", &value2);

        if(value1 >= value2) {
            printf("A contagem não pode ser executada.");
        }else{
                while(value1 < value2) {
                value1 ++;
                printf("%d\n", value1);
            }
        }
    }while(option == 2); 
}*/

//Loop for
/*#include <stdio.h>

int main() {
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("=============================\n");
    for(int i=1; i<=6; i++){
        for(int j=1; j<=20; j++){
            printf("#");
        }
        printf("#\n");
    }
}*/

#include <stdio.h>
#include <math.h>

int main() {
     printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    
}



