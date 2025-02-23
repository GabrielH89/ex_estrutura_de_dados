//SOLUÇÃO BRUTA: itera sobre todos os subarrays possíveis, mas tem tempo de execução O(N²)
/*function maxSubArraySum(array) {
    let maxSum = 0;

    for(let a=0; a<array.length; a++) {
        let currentSum = 0;

        for(let b=a; b<array.length; b++) {
            currentSum += array[b];
            maxSum = Math.max(maxSum, currentSum);
        }
    }
    return maxSum;
}

const array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
const result = maxSubArraySum(array);
console.log("Result: " + result);*/

//A solução mais eficiente é usando o ALGORTIMO DE KADANE
/*O QUE É ALGORITMO DE KADANE? Usado para encontrar a soma máxima de um subarrray contínuo
num array de números inteiros. A complexidade de tempo é O(N), o que o torna eficiente mesmo para arrays grandes.
*/
/*function maxSubArraySum(array) {
    let maxSum = array[0];
    let currentSum = array[0];

    for(let c=1; c<array.length; c++) {
        currentSum = Math.max(array[c],  currentSum + array[c]);

        maxSum = Math.max(maxSum, currentSum);
    }

    return maxSum
}

const array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
const result = maxSubArraySum(array);
console.log("Result: " + result);*/









