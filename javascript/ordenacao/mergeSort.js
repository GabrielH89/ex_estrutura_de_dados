/*function mergeSort(array){
  if(array.length <= 1){
    return array;
  }

  const middle = Math.floor(array.length / 2);
  const left = array.slice(0, middle);
  const right = array.slice(middle);

  const leftSorted = mergeSort(left);
  const rightSorted = mergeSort(right);

  let leftIndex = 0;
  let rightIndex = 0;

  const result = [];

  while(leftIndex < leftSorted.length && rightIndex < rightSorted.length){
    if(leftSorted[leftIndex] < rightSorted[rightIndex]){
      result.push(leftSorted[leftIndex]);
      leftIndex++;     
    }else{
      result.push(rightSorted[rightIndex]);
      rightIndex++;
    }
  }

  result.push(...leftSorted.slice(leftIndex));
  result.push(...rightSorted.slice(rightIndex));

  return result;
}

const array = [4, 6, 7, 0, -2, 12, 5];
const sortedArray = mergeSort(array);
const resultString = sortedArray.join(' ');
console.log(resultString);*/


/*let array = [3, 1, 2, 6, 5, 4];

let meio = Math.floor(array.length / 2);
let leftPart = array.slice(0, meio);
let rightPart = array.slice(meio);
console.log(leftPart);
console.log(rightPart)*/

/*function mergeSort(array){
  let n = array.length
  if(n <= 1){
    return array;
  }

  const meio = Math.floor(n / 2);
  const metadeEsquerda = array.slice(0, meio);
  const metadeDireita = array.slice(meio);

  const metadeEsquerdaOrdenada = mergeSort(metadeEsquerda);
  const metadeDireitaOrdenada = mergeSort(metadeDireita);

  return merge(metadeEsquerdaOrdenada, metadeDireitaOrdenada);
}
  
  function merge(metadeEsquerda, metadeDireita) {
    let resultado = [];
    let indiceEsquerda = 0;
    let indiceDireita = 0;
  
    // Combina as duas metades ordenadas em um único array ordenado
    while (indiceEsquerda < metadeEsquerda.length && indiceDireita < metadeDireita.length) {
      if (metadeEsquerda[indiceEsquerda] < metadeDireita[indiceDireita]) {
        resultado.push(metadeEsquerda[indiceEsquerda]);
        indiceEsquerda++;
      } else {
        resultado.push(metadeDireita[indiceDireita]);
        indiceDireita++;
      }
    }
    return resultado.concat(metadeEsquerda.slice(indiceEsquerda), metadeDireita.slice(indiceDireita));
}

const arrayDesordenado = [4, 7, 2, 6, 5, 1, 8, 3];
const arrayOrdenado = mergeSort(arrayDesordenado.slice());
console.log("Array ordenado: " + arrayOrdenado)*/




/*function mergeSort(array) {
  if(array.length <= 1){
    return array;
  }

  const meio = Math.floor(array.length / 2);
  const metadeEsquerda = array.slice(0, meio);
  const metadeDireita = array.slice(meio);

  const metadeEsquerdaOrdenada = mergeSort(metadeEsquerda);
  const metadeDireitaOrdenada = mergeSort(metadeDireita);

  return merge(metadeEsquerdaOrdenada, metadeDireitaOrdenada);
}

function merge(esquerda, direita) {
  let resultado = [];
  let a = 0;
  let b = 0;

  while(a < esquerda.length && b < direita.length) {
    if(esquerda[a] < direita[b]){
      resultado.push(esquerda[a]);
      a++;
    }else{
      resultado.push(direita[b]);
      b++;
    }
  }

  return resultado.concat(esquerda.slice(a)).concat(direita.slice(b));
}

const arrayDesordenado = [4, 7, 2, 6, 5, 1, 8, 3];
const arrayOrdenado = mergeSort(arrayDesordenado);
console.log("Array ordenado: " + arrayOrdenado);*/

function mergeSort(array) {
  let n = array.length;
  if(n <= 1){
    return array;
  }

  const middle = Math.floor(n / 2);
  const leftPart = array.slice(0, middle);
  const rightPart = array.slice(middle);

  const leftPartOrdered = mergeSort(leftPart);
  const rightPartOrdered = mergeSort(rightPart);

  return merge(leftPartOrdered, rightPartOrdered);
}

function merge(left, right){
  let result = [];
  let a = 0; let b = 0;

  while(a < left.length && b < right.length){
    if(left[a] < right[b]){
      result.push(left[a]);
      a++;
    }else{
      result.push(right[b]);
      b++;
    }
  }

  return result.concat(left.slice(a)).concat(right.slice(b));
}

const arrayDesordenado = [4, 7, 2, 6, 5, 1, 8, 3];
const arrayOrdenado = mergeSort(arrayDesordenado);
console.log("Array ordenado: " + arrayOrdenado);



