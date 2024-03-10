//QUICKSORT QUE PEGA O ÚLTIMO ELEMENTO DO ARRAY COMO PIVOT
/*function quickSort(array) {
    if(array.length <= 1){
        return array;
    }

    const pivotIndex = array.length - 1;
    const pivot = array[pivotIndex];

    const menores = [];
    const maiores = [];

    for(let c=0; c<pivotIndex; c++){
        if(array[c] < pivot){
            menores.push(array[c]);
        }else{
            maiores.push(array[c]);
        }
    }
    return [...quickSort(menores), pivot, ...quickSort(maiores)];
}


const arrayDesordenado = [5, 1, 9, 4, 8, 2];
const arrayOrdenado = quickSort(arrayDesordenado);
console.log("Array ordenado: " + arrayOrdenado);*/

//QUICKSORT QUE PEGA O PRIMEIRO ELEMENTO DO ARRAY COMO PIVOT
/*function quickSort(array) {
    if(array.length <= 1) {
        return array;
    }

    const pivotIndex = 0;
    const pivot = array[pivotIndex];
    
    const menores = [];
    const maiores = [];

    for(let c=1; c < array.length; c++){
        if (array[c] < pivot) {
            menores.push(array[c]);
        } else {
            maiores.push(array[c]);
        }
    }
    console.log("Menores: " + menores);
    console.log("Maiores: " + maiores)
    return [...quickSort(menores), pivot, ...quickSort(maiores)];
}

const arrayDesordenado = [33, 15, 10];
const arrayOrdenado = quickSort(arrayDesordenado);
console.log("Array ordenado: " + arrayOrdenado);*/


