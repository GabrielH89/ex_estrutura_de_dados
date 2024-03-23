/*const v1 = 5*/
/*let v1 = 5;
v1 = "Gabriel"

console.log("V1: " + v1);*/

//ARRAY
/*const array = ["Gabriel", "Julia", "Amanda"];

array.forEach(v => console.log(v));*/

//VARIABLE TYPES
/*console.log(3 == "3");//Return true, pois == só compara dois valores
console.log(3 === "3");//Return false, pois === sompara valores e tipos de variaveis
console.log("ss" === "aa");//return false, embora os tipos sejam os mesmos, as variaveis são diferentes
console.log("aa" == "aa");//return true, pois o tipo e variaveis são as mesmas*/


//OBJECT
/*let person = {
    nome: "Gabriel",
    age: 25,
    getInformation: function() {
        return "Name: " + this.nome + " | Age: " + this.age
    }
}

console.log(person.getInformation())*/

//HOISTING: declarações de variaveis e funções são movidas para o topo do arquivo
/*msg2();
printMessage();

function printMessage() {
    console.log("Message");
}

function msg2() {
    console.log("MSG 2");
}*/

//SPREAD OPERATOR
array1 = [1, 2, 3];
array2 = [4, 5, 6];

const join = [...array1, ...array2];//Concatenação de arrays
/*console.log(join);

//REFERÊNCIA DE OBJETO
let obj1 = {
    nome: "Gabriel"
}

let obj2 = obj1;
obj2.nome = "Samara"

console.log(obj1)//Smara 
console.log(obj2)//Samara

let obj3 = {
    nome: "Gabriel"
}

let obj4 = {...obj3};
obj4.nome = "Samara";
console.log(obj3)//Gabriel
console.log(obj4)//Samara*/

//MAP
/*é utilizado para iterar sobre cada elemento de um array e aplicar uma função a cada um desses elementos,
retornando um novo array com os resultados dessas aplicações.*/
/*const array = [5, 1, 4, 8, 6, 12, 10];
let result1 = array.map(n => n * 2);
console.log(result1)

let objects = array.map(n => ({id: n}));
console.log(objects);*/

/*const arrayNames = ["Gabriel", "Amanda", "Julia", "Raul"];
const getNames = arrayNames.map(x => ({name: x}));
console.log(getNames)*/

//FILTER
/*Serve para filtrar valores num array, de acordo com a especificação passada pelo usuário?*/
const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const numbersPar = array.filter(num => num % 2 == 0);
console.log(numbersPar); 
const numbersBiggerThan4 = array.filter(num => num > 4);
console.log(numbersBiggerThan4);



