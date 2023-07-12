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
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Insert the first value: ");
    scanf("%d", &n1);
    printf("Insert the second value: ");
    scanf("%d", &n2);
    int soma = n1 + n2;
    printf("A soma é %d\n", soma);
}







