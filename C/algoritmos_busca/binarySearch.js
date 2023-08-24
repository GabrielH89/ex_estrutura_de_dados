function buscaBinaria(arr, alvo) {
    let inicio = 0;
    let fim = arr.length - 1;

    while (inicio <= fim) {
        const meio = Math.floor((inicio + fim) / 2);

        if (arr[meio] === alvo) {
            return meio; // Retorna o índice onde o elemento foi encontrado
        } else if (arr[meio] < alvo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; // Retorna -1 se o elemento não foi encontrado
}

const listaOrdenada = [1, 2, 3, 5, 8, 9];
const elementoBuscado = 5;

const indiceEncontrado = buscaBinaria(listaOrdenada, elementoBuscado);
if (indiceEncontrado !== -1) {
    console.log(`Elemento encontrado no índice ${indiceEncontrado}`);
} else {
    console.log("Elemento não encontrado na lista");
}
