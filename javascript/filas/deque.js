
class Deque {
    constructor() {
        this.items = [];
    }
    
    addFront(element) {
        this.items.unshift(element)
    }

    addBack(element) {
        this.items.push(element);   
    }

    removeFront() {
        if(this.isEmpty()) {
            console.log("Não há elemento para remover na frente do deque");
        }else{
            const elementDeleted = this.items.shift();
            console.log(elementDeleted + " deletado com sucesso! ");
        }
    }

    removeBack() {
        if(this.isEmpty()) {
            console.log("Não há elementos para remover atrás do deque");
        }else{
            const elementDeleted = this.items.pop();
            console.log(elementDeleted + " deletado com sucesso! ");
        }
    }

    peekFront() {
        if(this.isEmpty()){
            console.log("O deque está vazio");
       }else{
            console.log("Primeiro elemento: " + this.items[0])
       } 
    }

    peekBack() {
       if(this.isEmpty()){
            console.log("O deque está vazio");
       }else{
            console.log("Último elemento: " + this.items[this.items.length - 1])
       }
    }

    isEmpty() {
        return this.items.length === 0;
    }

    showDeque() {
        console.log(this.items);
    }
    
    dequeLength() {
        if(this.isEmpty()) {
            console.log("A fila está vazia");
        }else if(this.items.length === 1){
            console.log("Há " + this.items.length + " elemento no array");
        }else{
            console.log("Há " + this.items.length + " elementos no array");
        }
        
    }
}

const d1 = new Deque();
d1.removeBack();
d1.removeFront();
d1.addBack(2);
d1.addFront(8);
d1.addFront(44);
d1.addBack(76);
d1.addFront(7);
d1.removeFront();
d1.removeBack();
d1.peekBack();
d1.peekFront();
d1.showDeque();
d1.dequeLength();










