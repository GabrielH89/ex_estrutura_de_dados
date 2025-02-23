/*const array = ["banana", "apple", "orange", "grape", "apple"];

// Objeto para rastrear as letras
const letrasRepetidas = {};

// Função para verificar se as letras se repetem em um elemento
function letrasRepetidasNoElemento(elemento) {
    const letras = {};
    for (let i = 0; i < elemento.length; i++) {
        const letra = elemento[i];
        if (letras[letra]) {
            return true;
        } else {
            letras[letra] = 1;
        }
    }
    return false;
}

// Verificar cada elemento do array
for (let i = 0; i < array.length; i++) {
    const elemento = array[i];
    if (letrasRepetidasNoElemento(elemento)) {
        letrasRepetidas[elemento] = true;
    }
}

// Exibir os elementos do array que possuem letras repetidas
console.log("Elementos com letras repetidas:");
for (const elemento in letrasRepetidas) {
    console.log(elemento);
}*/


/*const countStrings = (letter, phrase) => {
    let counter = 0;
    for(let c=0; c<phrase.length; c++){
        if(phrase[c] === letter) {
            counter++;
        }
    }
    console.log("The phrase " + phrase + " has " + counter + " letter(s)");
}

let letter = "a";
let phrase = "Gabriel é inteligente demais";
countStrings(letter, phrase);*/


/*function countStrings(word, letter) {
    let counter = 0; let counterLetter = 0;
    for(let c=0; c<word.length; c++) {
        counter ++;
        if(word[c] === letter) {
            counterLetter ++;
        }
    } 
    console.log("The word " + word + " has " + counter + " letters");
    console.log("There are " + counterLetter + " letter(s) '" + letter + "' at the word " + word);
}

countStrings("abacaxi", "p")*/
























