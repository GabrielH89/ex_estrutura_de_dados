//EXEMPLO BÁSICO DE FATORIAL
/*let value = 5;
let fatorial = 1;
for(let c=1; c<=value; c++){
    fatorial *= c;
}

console.log("Fatorial de " + value + " é " + fatorial)*/

//EXEMPLO SEM RECURSÃO
/*function fatorial(number){
    if(number < 0){
        return "Não pode calcular fatorial de valor negativo";
    }else if(number === 0 || number === 1){
        return 1;
    }else{
        let fatorial = 1;
        for(let c=1; c<=number; c++){
            fatorial *= c;
        }
        return fatorial;
    }
}

const number = -1;
const result = fatorial(number);
console.log("O fatorial de " + number + " é " + result);*/

//EXEMPLO COM RECURSÃO
/*function fatorial(number){
    if(number < 0){
        return "Impossivel calcular com valor negativo"
    }else if(number === 0 || number === 1){
        return 1;
    }else{
        return number * fatorial(number - 1);
    }
  }

  console.log(fatorial(-3))*/



//FIBONACCI SEQUENCE
//SEM RECURSAO
/*let a = 0; let b = 1;
let count = 98;
console.log(a);
console.log(b);

for(c=2; c<=count; c++){
    const next = a + b;
    console.log(next);
    a = b;
    b = next;
}*/

//RECURSÃO DE CONTAGEM REGRESSIVA
/*function countdown(value){
    if(value <= 0){
        return "A contagem regressiva não pode ser feita";
    }else{
        console.log(value)
        countdown(value - 1)
    }
}

console.log(countdown(7))*/


/*let val = 3;
let fatorial = 1;

for(let c=fatorial; c<=val; c++){
    fatorial *= c;
}

console.log("Fatorial de " + val + " é " + fatorial);*/

//FUNÇÃO TABUADA SEM RECURSÃO
/*function tabuada(value){
    if(value < 0){
        console.log("Não calculamos uma tabuada de valor negativo");
    }else{
        for(let c=0; c<=10; c++){
            let res = value * c;
            console.log(value + " X " + c + " = " + res);
        }
    }
}

tabuada(-4);*/

//FUNÇÃO TABUADA COM RECURSÃO
/*function tabuadaRecursiva(value, c=0){
    if(value < 0){
        console.log("Não calculamos uma tabuada de valor negativo");
    }else if(c <= 10){
        let res = value * c;
        console.log(value + " X " + c + " = " + res);
        tabuadaRecursiva(value, c + 1);        
    }
}

tabuadaRecursiva(5)*/

//CALCULAR A SOMA DOS ELEMTENTOS DO ARRAY
/*function somaArray(array, index = 0) {
    if(index === array.length){
        return 0;
    }

    return array[index] + somaArray(array, index + 1)
}

const array = [2, 4, 6];
const soma = somaArray(array);
console.log("Soma: " + soma)*/

//CALCULAR A QUANTIDADE DE ELEMENTOS DENTRO DE UM ARRAY
function countElementsArray(array, index = 0){
    if(index === array.length){
        return 0;
    }

    return 1 + countElementsArray(array, index + 1);
}

const array = [2, 4, 5, 7, 1, 11];
const result = countElementsArray(array);
console.log("Quant. de elementos no array: " + result);




