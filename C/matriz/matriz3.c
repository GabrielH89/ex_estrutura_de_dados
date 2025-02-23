#include <stdio.h>

int main() {
    int row, column, option, finishOption, rowToSee, columnToSee;
   
    printf("Insert how many rows you want for matrix \n");
    scanf("%d", &row);
    printf("Insert how many columns you want for matrix \n");
    scanf("%d", &column);

    int matrix[row][column];

    for(int a=1; a<=row; a++){
        for(int b=1; b<=column; b++){
            printf("Insert the value for position [%d][%d]: \n", a, b);
            scanf("%d", &matrix[a][b]);
        }
    }

    do {
        printf("[1] To show the complete matrix \n");
        printf("[2] To show a line from matrix \n");
        printf("[3] To show a column from matrix \n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("==== MATRIX ==== \n");
                for(int a=1; a<=row; a++){
                    for(int b=1; b<=column; b++){
                        printf("%d ", matrix[a][b]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("==== LINE FROM MATRIX ==== \n");
                printf("Insert what row you'd like to see \n");
                scanf("%d", &rowToSee);
                
                if(rowToSee < 1 || rowToSee > row) {
                    printf("Invalid row number \n");
                }else{
                    printf("==== SHOING ROW ==== \n");
                    for(int b = 1; b <= column; b++){
                        printf("%d ", matrix[rowToSee][b]);
                    }
                    printf("\n");
                }
                break;
            case 3: 
                printf("==== COLUMN FROM MATRIX ==== \n");
                printf("Insert what column you'd like to see \n");
                scanf("%d", &columnToSee);
                
                if(columnToSee < 1 || columnToSee > column) {
                    printf("Invalid row number \n");
                }else{
                    printf("==== SHOING COLUMN ==== \n");
                    for(int a = 1; a <= row; a++){
                        printf("%d \n", matrix[a][columnToSee]);
                    }
                    printf("\n");
                }
                break;
        }

        printf("Would you like finish this program? [1-YES] \n");
        scanf("%d", &finishOption);
    }while(finishOption != 1);

}


