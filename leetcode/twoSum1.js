//First solution
/*function twoSum(array) {
    let size = array.length;
    let soma = 0;

    for(let c=0; c<size; c++) {
       if(array[c] + array[c+1] === 9) {
        console.log("Value 9 found at " + array[c] + " and " + array[c+1]);
       }
    }
}

const array = [11, 15, 2, 7];
twoSum(array);*/


const nums = [2, 11, 15, 7];
const target = 22

const twoSum = function(nums, target) {
    const map = new Map();
    for (let c = 0; c < nums.length; c++) {
        const complement = target - nums[c];
        if (map.has(complement)) {
            return [map.get(complement), c];  // Retorna os índices corretos
        }
        map.set(nums[c], c);
    }
    return [];  // Retorna um array vazio se nenhum par for encontrado
}

const result = twoSum(nums, target);  // Chama a função com os argumentos corretos
console.log(result);  // Imprime o resultado, que deve ser os índices dos elementos que somam para o target
