//Esse algoritmo de busca linear tem complexidade O(n), onde "n" é o número de elementos no array. Isso significa que o tempo de execução é linearmente proporcional ao número de elementos no array. 
//BUSCA LINEAR
/*let numbers = [2, 3, 4, 10, 4, 12, 20]
const value = 3;
for(let c=0; c<numbers.length; c++){
    if(numbers[c] == value) {
        console.log("The " + numbers[c] + " was found at the position " + c);
    }
}
console.log(value + " not exists at the array")*/


//BUSCA BINÁRIA
/*function buscaBinaria(array, elemento) {
    let inicio = 0; let fim = array.length - 1;
    while(inicio <= fim){
        const meio = Math.floor((inicio + fim)/2);
        const valorMeio = array[meio];

        if(valorMeio == elemento){
            return meio;
        }else if(valorMeio < elemento){
            inicio = meio + 1;
        }else{
            fim = meio -1;
        }
    }
}

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const elementoProcurado = 5;
const indiceEncontrado = buscaBinaria(numbers, elementoProcurado)

if (indiceEncontrado !== -1) {
    console.log(`O elemento ${elementoProcurado} foi encontrado no índice ${indiceEncontrado}.`);
  } else {
    console.log(`O elemento ${elementoProcurado} não foi encontrado na lista.`);
  }*/





