#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int size;

    printf("Insert the size of array \n");
    scanf("%d", &size);
    getchar();
    char vetor[size][100];

    for(int c=0; c<size; c++){
        printf("Insert the name for position %d \n ", c);
        fgets(vetor[c], sizeof(vetor[c]), stdin);
        vetor[c][strcspn(vetor[c], "\n")] = '\0';// Remove a quebra de linha do final da string lida pelo fgets
    }

    printf("==== COMPLETE ARRAY ==== \n [ ");
    for(int c=0; c<size; c++) {
        printf("%s ", vetor[c]);
    }
    printf(" ] \n");
}




