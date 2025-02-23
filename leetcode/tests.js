/*const takeBiggerAndLowerValue = (array) => {
    const size = array.length;

    let bigger = array[0]; let lower = array[0];
    for(let c=0; c<size; c++) {
        if(array[c] > bigger) {
            bigger = array[c];
        }else if(array[c] < lower) {
            lower = array[c];
        }
    }

    console.log("Bigger value: " + bigger);
    console.log("Lower value: " + lower);
}

const array = [3, 13, 1, 10, 9, -4, 7];
takeBiggerAndLowerValue(array);*/


//SOMAR ARRAY
/*function somaArray(array) {
    const size = array.length;

    if(array <= 1) {
        return array;
    }
    
    const valueChoosed = array[0];
    let equal = []; let lower = []; let bigger = [];

    for(let c=0; c<size; c++) {
        if(array[c] > valueChoosed) {
            bigger.push(array[c]);
        }else if(array[c] < valueChoosed) {
            lower.push(array[c]);
        }else{
            equal.push(array[c]);
        } 
    }

    console.log("Values bigger than " + valueChoosed + ": [" + bigger + "]");
    console.log("Values lower than " + valueChoosed + ": [" + lower + "]");
    console.log("Values equals than " + valueChoosed + ": [" + equal + "]");
   
}

const array = [4, 1, -3, 2, -6, 7, -4]
somaArray(array);*/


//GENERATE SUBARRAY
function generateSubarray(array) {
    let subArrays = [];

    for(let a=0; a<=array.length; a++) {
        for(let b=a; b<array.length; b++) {
            let subArray = array.slice(a, b+1);
            subArrays.push(subArray);   
        }
    }
    return subArrays;
}

const array = [1, 2, 3, 4];
const result = generateSubarray(array);
console.log("Subarrays ", result);







