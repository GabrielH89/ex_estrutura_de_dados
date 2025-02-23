const numbers = [10, 3, 0, 2, -2, 6, 5, 9, 12, 8];

let less = numbers[0];
let biggest = numbers[0];
let posLess; let posBiggest; 
for(let c=0; c<numbers.length; c++){
    if(numbers[c] < less){
        less = numbers[c];
        posLess = c;
    }

    if(numbers[c] > biggest){
        biggest = numbers[c];
        posBiggest = c;
    }

}
console.log("The smallest element of array is " + less + " on the position " + posLess);

console.log("The biggest element of array is " + biggest + " on the position " + posBiggest);