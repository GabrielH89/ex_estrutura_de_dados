class HashTable {
    constructor(size) {
        this.size = size;
        this.table = new Array(size).fill(null).map(() => []);
    }

    // Função para inicializar a tabela hash
    initializeTable() {
        this.table = new Array(this.size).fill(null).map(() => []);
    }

    // Função de hash simples
    functionHash(key) {
        let hash = 0;
        for (let i = 0; i < key.length; i++) {
            hash += key.charCodeAt(i);
        }
        return hash % this.size;
    }

    // Função para inserir um par chave-valor na tabela hash
    insert(key, value) {
        const index = this.functionHash(key);
        this.table[index].push({ key, value });
    }

    // Função para buscar um valor na tabela hash a partir da chave
    search(key) {
        const index = this.functionHash(key);
        const bucket = this.table[index];
        for (const entry of bucket) {
            if (entry.key === key) {
                return entry.value;
            }
        }
        return null;
    }

    // Função para imprimir a tabela hash
    print() {
        for (let i = 0; i < this.size; i++) {
            console.log(`Bucket ${i}:`);
            for (const entry of this.table[i]) {
                console.log(`  ${entry.key}: ${entry.value}`);
            }
        }
    }
}

// Exemplo de uso da tabela hash
const hashTable = new HashTable(10);
hashTable.insert("key1", "value1");
hashTable.insert("key2", "value2");
hashTable.insert("key3", "value3");
hashTable.insert("key4", "value5")

console.log("Search key2:", hashTable.search("key2")); // Output: Search key2: value2
console.log("Search key4:", hashTable.search("key4")); // Output: Search key4: null

console.log("HashTable:");
hashTable.print();
