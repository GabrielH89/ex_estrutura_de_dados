#include <stdio.h>
#include <math.h>

int main() {
    int matriz[3][3];

    printf("==== PREECHA A MATRIZ ==== \n");
    for(int a=0; a<3; a++){
        for(int b=0; b<3; b++){
            printf("Insert element for position [%d][%d]: ", a, b);
            scanf("%d", &matriz[a][b]);
        }
    }

    printf("===== MATRIZ ===== \n");
    for(int a=0; a<3; a++){
        for(int b=0; b<3; b++){
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }

    printf("Element from position [1][2] %d ", matriz[0][1]);
}
