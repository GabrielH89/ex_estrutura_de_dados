// Implementação básica de um HashMap em Node.js usando um objeto JavaScript

class HashMap {
    constructor() {
        this.map = {};  // Usaremos um objeto JavaScript para armazenar os pares chave-valor
    }

    // Método para inserir um par chave-valor no HashMap
    put(key, value) {
        this.map[key] = value;  // Atribui o valor associado à chave no objeto
    }

    // Método para obter o valor associado a uma chave no HashMap
    get(key) {
        return this.map[key];  // Retorna o valor associado à chave, ou undefined se não existir
    }

    // Método para verificar se o HashMap contém uma chave específica
    containsKey(key) {
        return key in this.map;  // Verifica se a chave existe no objeto
    }

    // Método para remover um par chave-valor do HashMap
    remove(key) {
        if (this.containsKey(key)) {
            delete this.map[key];  // Remove a chave e seu valor associado do objeto
        }
    }

    // Método para retornar todas as chaves do HashMap como um array
    keys() {
        return Object.keys(this.map);  // Retorna um array contendo todas as chaves do objeto
    }

    // Método para retornar todos os valores do HashMap como um array
    values() {
        return Object.values(this.map);  // Retorna um array contendo todos os valores do objeto
    }

    // Método para retornar o número de pares chave-valor no HashMap
    size() {
        return Object.keys(this.map).length;  // Retorna o número de chaves no objeto
    }

    // Método para limpar todos os pares chave-valor do HashMap
    clear() {
        this.map = {};  // Reinicializa o objeto para remover todos os pares chave-valor
    }
}

// Exemplo de uso do HashMap
const myHashMap = new HashMap();

// Inserindo pares chave-valor no HashMap
myHashMap.put("name", "John");
myHashMap.put("age", 30);
myHashMap.put("city", "New York");

// Obtendo valores do HashMap
console.log(myHashMap.get("name"));  // Saída: "John"
console.log(myHashMap.get("age"));   // Saída: 30
console.log(myHashMap.get("city"));  // Saída: "New York"
console.log(myHashMap.get("gender"));  // Saída: undefined (chave inexistente)

// Verificando se o HashMap contém uma chave específica
console.log(myHashMap.containsKey("name"));  // Saída: true
console.log(myHashMap.containsKey("gender"));  // Saída: false

// Removendo um par chave-valor do HashMap
myHashMap.remove("a");

// Obtendo todas as chaves e valores do HashMap
console.log(myHashMap.keys());    // Saída: ["name", "city"]
console.log(myHashMap.values());  // Saída: ["John", "New York"]
console.log(myHashMap.values());  // Saída: ["John", "New York"]

// Obtendo o número de pares chave-valor no HashMap
console.log(myHashMap.size());  // Saída: 2

// Limpando todos os pares chave-valor do HashMap
myHashMap.clear();
console.log(myHashMap.size());  // Saída: 0 (HashMap vazio)
