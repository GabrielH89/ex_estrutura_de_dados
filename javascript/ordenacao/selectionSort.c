/*#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {5, 1, 4, 14, 10, 8, 6, 7};
    int n = sizeof(array) / sizeof(array[0]) - 1;

    for(int a=0; a<n-1; a++){
        int minIndex = a;
        for(int b=a+1; b<n; b++){
            if(array[minIndex] > array[b]){
                minIndex = b;
            }
        }
        int aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }

    printf("Oredered array: ");
    for(int c=0; c<n; c++){
        printf("%d ", array[c]);
    }
}*/

/*#include <stdio.h>
#include <math.h>

int main() {
    int array[] = {5, 7, 1, 13, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);

    for(int a=0; a<n-1; a++){
        int minIndex = a;
        for(int b=a+1; b<n; b++){
            if(array[minIndex] > array[b]){
                minIndex = b;
            }
        }
        int aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }

    printf("Ordered array: ");
    for(int c=0; c<n; c++){
        printf("%d ", array[c]);
    }
}*/

/*#include <stdio.h>
#include <math.h>

int main() {
    int q;

    printf("Quantos elemento deseja adicionar no array? \n");
    scanf("%d", &q);

    int array[q];

    for(int a=0; a<q; a++){
        printf("Digite o elemento %d \n", a + 1);
        scanf("%d", &array[a]);
    }

    printf("ARRAY COM OS ELEMENTOS ADICONADOS \n");
    for(int a=0; a<q; a++){
        printf("%d ", array[a]);
    }
}*/

#include <stdio.h>
#include <math.h>







