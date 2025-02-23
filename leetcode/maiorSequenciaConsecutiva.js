//ABORDAGEM INGÊNCIA: FORÇA BRUTA
/*Ordena o array e percorre verificando os números consecutivos.
Problema: Ordenação custa O(n log n), e a verificação consome O(n), totalizando O(n log n).*/

function maiorSequenciaConsecutiva(array) {
    let longestStreak = 0;

    for(let c=0; c<array.length; c++) {
        let currentNum = array[c];
        let currentStreak = 1;

        while(array.includes(currentNum + 1)) {
            currentNum ++;
            currentStreak ++;
        }
        longestStreak = Math.max(longestStreak, currentStreak);
    }
    return longestStreak;
}


const array = [100, 4, 200, 1, 2, 3];
const result = maiorSequenciaConsecutiva(array);
console.log(result) 

