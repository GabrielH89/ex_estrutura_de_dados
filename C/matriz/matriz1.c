#include <stdio.h>
#include <math.h>

int main() {

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {1, 4, 5, 6, 8, 13, 13, 45, 67};
    
    printf("First element : %d \n", matriz2[0][0]);
    printf("Matriz \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
}

