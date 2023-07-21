/*class Queue {
    constructor() {
        this.count = 0;
        this.firstElement = 0;//Variável para manter o controle do primeiro elemento
        this.items = {};
    }

    enqueue(element) {
        this.items[this.count] = element;
        this.count++;
    }

    dequeue() {
        if(this.isEmpty()){
            return "A lista está vazia";
        }else{
            const result = this.items[this.firstElement];
            delete this.items[this.firstElement]
            this.firstElement ++;
            return result;
        }
    }

    peek() {
        if(this.isEmpty()) {
            console.log("Não há elementos na lista")
        }else{
            return this.items[this.firstElement];
        }
    }

    isEmpty() {
        return this.count.length === 0;
    }
}

const queue = new Queue();
queue.enqueue(3); queue.enqueue(4); queue.enqueue(8)

console.log(queue.isEmpty());
console.log(queue.dequeue())

console.log(queue.peek())*/

class Queue {
    constructor() {
        this.items = [];
        this.firstElement = 0;
        this.lastlement = 0; 
    }

    enqueue(element) {
        return this.items.push(element);
    }

    dequeue() {
        if(this.isEmpty()) {
            return "There's no element to delete"
        }else{
            return this.items.shift();
        }        
    }

    //Mostra o primeiro elemento da fila
    peek() {
        if(this.isEmpty()) {
            return "There's no element to delete"
        }else{
            return this.items[this.firstElement];
        }
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        return "A fila tem " + this.items.length + " elemento(s)";
    }

    //Limpa todos os elmeentos da lista
    clear() {
        return this.items = [];
    }
}

const queue = new Queue();
queue.enqueue(4); queue.enqueue(7); queue.enqueue(5);
console.log(queue.isEmpty());
console.log(queue.dequeue());
console.log(queue.peek());
console.log(queue.size())

console.log(queue.peek())




