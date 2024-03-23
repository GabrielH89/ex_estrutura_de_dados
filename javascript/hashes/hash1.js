const TAM = 11;

function initializeTable(t) {
    for (let c = 0; c < TAM; c++) {
        t[c] = 0;
    }
}

function functionHash(key) {
    return key % TAM;
}

function insert(t, value) {
    let id = functionHash(value);
    while (t[id] !== 0) {
        id = (id + 1) % TAM;
    }
    t[id] = value;
}

function search(t, key) {
    let id = functionHash(key);
    while (t[id] !== 0) {
        if (t[id] === key) {
            return id;
        } else {
            id = (id + 1) % TAM;
        }
    }
    return -1;
}

function deleteKey(t, key) {
    let id = search(t, key);
    if (id !== -1) {
        t[id] = 0;
        console.log(`Element ${key} deleted from position ${id}`);
    } else {
        console.log(`Element ${key} was not found to delete`);
    }
}

function print(t) {
    for (let c = 0; c < TAM; c++) {
        console.log(`${c} == ${t[c]}`);
    }
}

function main() {
    const table = new Array(TAM).fill(0);
    initializeTable(table);
    insert(table, 11);
    insert(table, 38);
    insert(table, 24);
    insert(table, 29);
    deleteKey(table, 38);
    deleteKey(table, 24);

    print(table);
    const valueSearch = 38;
    const position = search(table, valueSearch);
    if (position !== -1) {
        console.log(`Value ${valueSearch} was found at position ${position}`);
    } else {
        console.log(`Value ${valueSearch} was not found`);
    }
}

main();
