//Object refere-se ao construtor de objetos em JavaScript. 
//É uma função embutida em JavaScript que cria um novo objeto.
//Conjunto é usado em operações JOIN de MYSQL
class Set {
    constructor() {
        this.items = [];
    }

    has(element) {
        return Object.prototype.hasOwnProperty.call(this.items, element);
    }

    add(element){
        if(!this.has(element)){
            this.items[element] = element;
            return true;
        }
        return false;
    }

    delete(element){
        if(this.has(element)){
            delete this.items[element];
            return true;
        }
        return false;
    }

    clear() {
        this.items = {}
    }

    size() {
        return Object.keys(this.items).length;
    }

    values() {
        return Object.values(this.items);
    }
}

const s1 = new Set();

s1.add(4)
s1.add(5);
s1.add(13)
s1.delete(13)
console.log(s1.has(14))
console.log(s1.values())
console.log(s1.size())
