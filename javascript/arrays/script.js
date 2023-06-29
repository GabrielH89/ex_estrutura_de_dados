/*const peoples = [
    {nome: "Gabriel", age: 35},
    {nome: "Joana", age: 45}
]

console.log(peoples.reverse())

const ageHigh = 30;
const highValue = peoples.find((user) => user.age > 30)

console.log(highValue)*/

/*const gab = () => {

}
console.log(typeof gab)

const soma = (x=1, y=2, z=3) => {
    return x+y+z;
}

console.log(soma(3, 6))*/

//Array 
/*const temp = ['sunday', 'monday', 'tuesday'];

for(c=0; c<temp.length; c++){
    console.log('Elemento ' + c + ' do arry é: ' + temp[c])
}

console.log('Número de elementos do array: ' + temp.length)*/

//Fibonacci sequence
/*const fibonacci = [];
fibonacci[1] = 1;
fibonacci[2] = 2;

for(i=3; i<20; i++){
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
}

for(i=1; i<fibonacci.length; i++){
    console.log(fibonacci[i] + " está na posição " + i + " do array.")
}*/


/*const numbers = [1, 2, 3, 4, 5]
//Função que adiciona um elemento no início do array
Array.prototype.insertFirstPosition = function(value) {
    for (let i = this.length; i >= 0; i--) {
    this[i] = this[i - 1];
    }
    this[0] = value;
    };
    numbers.insertFirstPosition(-1)
    numbers.unshift(33)//Realiza o mesmo procedimento da função, pois add no início
    numbers.shift()//Exclui o primeiro elemento do array
    console.log(numbers)
*/

/*let numbers = [1, 2, 3, 4, 5];

for (let i = 0; i < numbers.length; i++) {
    numbers[i] = numbers[i + 1];
    console.log(numbers[i])
}
console.log(numbers)*/

/*const names = ["Gabriel", "Heitor", "Maria"];

for (c=0; c<names.length; c++){
    console.log(names[c])
}

names.unshift();
console.log(names)*/

//ADICIONAR ELEMENTOS E EXCLUÍ-LOS EM QUALQUER POSIÇÃO DO ARRAY
/*const numbers = [2, 3, 4, 7, 66];

numbers.splice(1, 2);//Remove dois elementos a partir do índice 1

console.log(numbers)

const names = ["William", "Pedro", "aa", "bb", "cc"];

names.splice(0, 4);
console.log(names)*/

//Array bidimensional

let matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

let averageTemp = [];
averageTemp[0] = [72, 75, 79, 79, 84, 81];
averageTemp[1] = [81, 79, 75, 75, 73, 73];

try {
    console.log(averageTemp[2][2])
}catch(err){
    console.log("Ocurred this error " + err)
}

function showArray(print) {
    for(l=0; l<print.length; l++){
        for(c=0; c<print[l].length; c++){
            console.log(print[l][c])
        }
    }
}

showArray(matriz)

//Matriz tridimensional
/*matrix3x3x3 = [
    [2, 4, 4], [2,3, 4, ]
]
for (let i = 0; i < matrix3x3x3.length; i++) {
    for (let j = 0; j < matrix3x3x3[i].length; j++) {
        for (let z = 0; z < matrix3x3x3[i][j].length; z++) {
            console.log(matrix3x3x3[i][j][z]);
        }
    }
}

const max = Number.MAX_SAFE_INTEGER;
console.log(max)

let n1 = 0.1;
let n2 = 0.2;
let soma = n1 + n2;
if (soma == 0.3){
    console.log("True");
}else{
    console.log("False")
}*/

//Métodos essenciais de array em javascript

//CONCAT: junta vários arrays e devolve uma cópia dos arrays concatenados
/*const n1 = -23;
const impar = [1, 3, 5, 7];
const par = [2, 4, 6, 8];
const concat = impar.concat(par, n1)
console.log(concat)

function concatenar(array, array2) {
    console.log(array.concat(array2))
}

concatenar(impar, par)*/


/*EVERY: Itera por todos os elementos do array, verificando uma condição desejada (função) até que false seja
devolvido.*/
/*const array1 = [-3, -4, 2, 4, 5, 0, -12, 44];

array1.every(findPositiveNumber);

function findPositiveNumber(num){
    return num >= 0;
}

//Se eu colocar um número menor que 0, vai retornar false, maior retorna true
console.log(findPositiveNumber(-3))*/

//MAP, FILTER e REDUCE:  constituem a base da programação funcional em JavaScript
/*const array1 = [1, 3, 5, 7, 9];

const newArray = array1.map(Math.sqrt);

const array2 = array1.map(myFunction);

function myFunction(num) {
    return num * 10;
}

console.log(array2)

//Filter
const numbers = [1, 2, 3, 4, 33, 22, 34, 18, 0, 11];

const resultFilter = numbers.filter(imparOuPar)

function imparOuPar(num) {
    if (num % 2 == 0){
        console.log(num + " é par")
    }else{
        console.log(num + " é ímpar")
    }
}*/

/*let name1 = ["aaa", "bbb", "ccc"];

let name2 = Array.from(name1)

let newName1 = name1.fill(3)//Método fill retorna todos os elementos de um array com valor especificado
console.log(newName1)*/

let numbers = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
function multipleOf13(element, index, array) {
return (element % 13 == 0);
}
console.log(numbers.find(multipleOf13));//É o elemento de valor 13
console.log(numbers.findIndex(multipleOf13));//Retorna a posição do elemento que é 12

















