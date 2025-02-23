
function selectionSort(array) {
    let n = array.length;
    for(let a=0; a<n-1; a++) {
        let minIndex = a;
        for(let b=a+1; b<n; b++){
            if(array[minIndex] > array[b]) {
                minIndex = b;
            }
        }
        let aux = array[a];
        array[a] = array[minIndex];
        array[minIndex] = aux;
    }
    return array; 
}


const unorderedArray = [4, 1, 8, 5, 3];
const orderedArray = selectionSort(unorderedArray);
console.log("Ordered array: " + orderedArray);