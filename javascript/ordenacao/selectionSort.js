const numbers = [4, 2, 0, 7, 12, 3];

function selectionSort(){
    let minIndex = 0; let j = 0;
    for(let c=0; c<numbers.length; c++){
        if(numbers[c] < numbers[minIndex]){
            minIndex = c;
        }
        if(numbers[j] > numbers[minIndex]) {
             let aux = numbers[j]
             numbers[j] = numbers[minIndex]
             numbers[minIndex] = aux; 
        }
    }
}


