//O QUE SIGNIFICA LIMPAR BUFFER? Limpar o buffer do teclado significa remover qualquer caractere residual ou nova linha que possa ter sido deixado no buffer de entrada do teclado. Isso é importante para evitar comportamentos inesperados quando você está alternando entre funções de leitura como scanf e fgets.
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char a, b;

    printf("Insert the first letter \n");
    scanf("%c", &a);
    // Quando o usuário insere um caractere e pressiona Enter, o caractere e a nova linha (\n) são lidos.
    // Para evitar que a nova linha interfira na próxima leitura, um espaço é adicionado antes do %c.
    printf("Insert the second letter \n");
    scanf(" %c", &b);// O espaço antes do %c ignora qualquer caractere de nova linha remanescente no buffer.

    printf("First letter: %c \n", a);
    printf("Second letter: %c \n", b);
}
