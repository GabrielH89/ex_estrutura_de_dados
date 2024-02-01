/*let arr = [64, 34, 25, 12, 22, 11, 90];

let n = arr.length;
let swapped;//Variavel para verificar se houve troca de elementos dutante uma passagem no array

for (let i = 0; i < n; i++) {
  swapped = false;//Inidica que nenhuma troca ocorreu até o momento

  for (let j = 0; j < n - i - 1; j++) {
    //Esse loop itera pelo array, comparando pares de elementos adjacentes e realizando as trocas, se necessário.
    if (arr[j] > arr[j + 1]) {
      // Trocar os elementos arr[j] e arr[j + 1]
      let temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
      swapped = true;
    }
  }

  if (!swapped) {
    // Se nenhum elemento foi trocado nesta passagem, o array está ordenado
    break;
  }
}

console.log("Array ordenado: " + arr);*/


/*function square(n){
  for(let a=1; a<=n; a++){
    console.log(a + " ° loop A")
    for(let b=1; b<=n; b++){
      console.log(a, b);      
    }
  }
}

square(4)*/

for(let c=100; c>=0; c -= 10) {
  console.log(c);
}