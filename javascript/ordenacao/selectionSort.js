//CÓDIGO PARA ENCONTRAR O MENOR E O MAIOR ELEMENTO DENTRO DE UMA LISTA
/*let array = [3, 1, 8, 5, 6, 17];
let n = array.length;
let min = array[0];
let max = array[0];

for(let c=0; c<n; c++){
    if(max < array[c]){
       max = array[c]
    }else if(min > array[c]){
        min = array[c]
    }
}
console.log("O maior valor do arrya é " + max);
console.log("O menor valor do array é " + min)*/

/*function selectionSort(array){
    let n = array.length;
    for(let a=0; a<n-1; a++){
        let minIndex = a;
        for(let b=a+1; b<n; b++){
            if(array[minIndex] > array[b]){
                minIndex = b;
            }
        }
        let aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }
}

const newArray = [5, 1, 8, 3, 15, 10, 9];
selectionSort(newArray);
console.log("Array ordenado: " + "[" + newArray + "]");


/*let array = [2, 13, 1, 7, 4, 8, -4, 2];
let n = array.length;
O loop na variável a conta até o antepenúltimo elemento da lista (n-1). 
Isso ocorre porque, durante a iteração do loop, você compara o elemento na posição a 
com todos os elementos que estão à frente (posições b). 
Se você fosse até o último elemento, não haveria mais elementos à frente para comparar.
for(let a=0; a<n-1; a++){   
    let minIndex = a;
    //A variável minIndex vai manter o índice do elemento mínimo encontrado até o momento.
    //Neste caso o -4, sendo o menor valor, já vai automaticamente para a primeira posição
    for(let b=a+1; b<n; b++){
        if(array[b] < array[minIndex]){
           minIndex = b;
            //Acima, compara-se o valor na posição b, se for maior que está no minIndex, que é o -4
            //Se for maior, então atualizar o minIndex = b
        }
    }

    if(minIndex !== a){
        //verificamos se o minIndex mudou em relação ao valor inicial a. 
        //Se tiver mudado, significa que encontramos um valor menor do que o atual valor em a
        let aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }
}

console.log("Ordenação " + array)*/


/*let array = [4, -3, 2, 10, 6, 20, -6, 5];
let n = array.length;

for(let a=0; a<n-1; a++){
    let minIndex = a;
    for(let b=a+1; b<n; b++){
        //Compara cada elemento com o elemento minimo encontrado até o momento, 
        //Pois o anterior já está ordenado
        if(array[b] < array[minIndex]){
            minIndex = b;
        }
    }

    if(minIndex !== a){
        let aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }
}

console.log("Array ordenado: " + array)*/

