/*Variáveis compostas homogêneas multidimensionais são matrizes (arrays multidimensionais) em linguagens de programação, 
que armazenam elementos do mesmo tipo organizados em várias dimensões.*/

/*#include <stdio.h>

int main() {
    int array1[] = {1, 4, 5, 6};
    int array2[] = {4, 2, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int countEqualValues = 0;
    for(int a=0; a<size1; a++) {
        for(int b=0; b<size2; b++) {
            printf("[%d] X [%d] \n", array1[a], array2[b]);
            if(array1[a] == array2[b]) {
                countEqualValues ++;
                printf("Equal values found \n");
            }
        }
    }
    printf("Number of equal values: %d", countEqualValues);
}*/



/*#include <stdio.h>

int main() {
    int option, row, column;
    do {
        printf("Rows: \n");
        scanf("%d", &row);
        printf("Columns: \n");
        scanf("%d", &column);

        int matrix[row][column];

        for(int a=0; a<row; a++) {
            for(int b=0; b<column; b++) {
                printf("Insert value for position [%d][%d]: \n", a, b);
                scanf("%d", &matrix[a][b]);
            }
        }

        printf("==== SHOWING MATRIX ==== \n");
        for(int a=0; a<row; a++) {
            for(int b=0; b<column; b++) {
                if(matrix[a][b] % 2 == 0) {
                    printf("(%d) ", matrix[a][b]);
                }else{
                    printf("%d ", matrix[a][b]);
                }
            }
            printf("\n");
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}*/

//NTARIZ IDENTIDADE
#include <stdio.h>

int main() {
   int row = 7; int column = 7; 
   int matrix[row][column];

    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            if(i == j) {
                matrix[i][j] = 1;
            }else{
                matrix[i][j] = 0;
            }
        }     
    }

    printf("==== MATRIZ IDENTIDADE ==== \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}









