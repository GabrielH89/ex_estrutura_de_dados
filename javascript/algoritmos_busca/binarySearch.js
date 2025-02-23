//Binary seach
//Interpretação elementar de como pegar o valor do meio
/*let value = 5;
let array = [1, 2, 123, 4];
let initial = 0;
let final = array.length - 1;
let found = false;

const meio = Math.floor((initial + final) / 2);
console.log("A psoição do meio é " + meio)
while (initial <= final){
    if(array[meio]){
        console.log("O valor contido nessa posição é o " + array[meio])
        break;
    }
}*/

//LOGARITMO
/*function logaritmo(n){
    for(let c=0; c<=n; c++){
        n = Math.floor(n/2);
        console.log(n);
    }
    
}

logaritmo(8)*/

/*function logaritmo(n){
    let result = 0;
    while(n > 1){
        n = Math.floor(n / 2);
        result ++;
    }
    return result;
}

console.log(logaritmo(15))*/



/*let num = 14; //Valor a ser pesquisado passado pelo usuário
let arrayNumbers = [1, 3, 4, 5, 10, 12, 14];

function binarySearch(array, value){
    let initial = 0; //Posição 0 do vetor 
    let final = arrayNumbers.length - 1;
    let found = false;

    while(initial <= final){
        let meio = Math.round((initial + final) / 2);

        if(array[meio] === value){
            found = true;
            return meio;
        }else if(array[meio] > value){
            final = meio - 1;
        }else{
            initial = meio + 1;
        }
    }

    return -1;
}

const position = binarySearch(arrayNumbers, num)

if (position !== -1) {
    console.log(`O valor ${num} foi encontrado na posição ${position}.`);
} else {
    console.log(`O valor ${num} não foi encontrado no array.`);
}*/

/*let value = 18;
let array = [1, 2, 3, 10, 12, 14, 18];
let inicio = 0;
let fim = array.length - 1;
let found = false;

while(inicio <= fim){
    let meio = Math.floor((inicio + fim)/2);
    if(array[meio] === value){
        found = true;
        console.log("Valor " + value + " encontrao na posição " + meio + " do array");
        return meio;       
    }else if(array[meio] > value){
        final = meio - 1;
    }else{
        inicio = meio + 1;
    }
}

if(!found){
    console.log("O valor " + value + " não foi encontrado");
}*/


const names = ["Aline", "Daniel", "Gabriel", "Juliana"];

function binarySearch(array, value) {
    let size = array.length;
    let left = 0;
    let right = size - 1;
    let found = false;

    while(left <= right) {
        const middle = Math.floor((left + right) / 2);
        if(array[middle] === value) {
            found = true;
            console.log("Name " + value + " found in position " + middle);
            break;
        }else if(value < array[middle]){
            right = middle - 1;
        }else{
            left = middle + 1;
        }
    }

    if(!found) {
        console.log("Name " + value + " not found");
    }
}

binarySearch(names, "Gabriel");





















