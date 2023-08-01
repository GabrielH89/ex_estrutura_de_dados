#include <stdio.h>
#include <Math.h>

int main(){
    float logaritmo; int logaritmando;
    printf("======== Logaritmo de base 2 =======\n");
    printf("Insira o logaritmando: ");
    scanf("%d\n", &logaritmando);
    logaritmo = log2(logaritmando);
    printf("O resultado é %f\n", logaritmo);
    return 0;
    }