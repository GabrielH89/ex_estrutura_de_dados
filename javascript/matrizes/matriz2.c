#include <stdio.h>

int main() {
    int rows, columns, option, optionCase;

    printf("How many lines would you like add? \n");
    scanf("%d", &rows);
    printf("How many columns would you like add? \n");
    scanf("%d", &columns);

    int matrix[rows][columns];

    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            printf("Insert a value for position [%d][%d] \n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("===== SHOWING MATRIX ===== \n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    do{
        printf("[1] Show main diagonal \n");
        scanf("%d", &optionCase);

        switch(optionCase) {
            case 1:
                printf("==== MAIN DIAGONAL ==== \n");
                if (rows != columns) {
                    printf("The matrix is not square, so it has no main diagonal.\n");
                } else {
                    printf("\n==== MAIN DIAGONAL ====\n");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", matrix[i][i]); 
                    }
                    printf("\n");
                }
            break;
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &option);
    }while(option != 1);
}