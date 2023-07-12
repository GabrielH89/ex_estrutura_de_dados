//EXEMPLO DE PILHA USANDO CLASSE
class Stack {
    constructor() {
        this.items = [];
    }

    push(element) {
        return this.items.push(element);
    }

    pop(element) {
        if(this.isEmpty()) {
            return "Não há elementos para excluir";
        }else{
            return "Elemento " + this.items.pop(element) + " excluído. ";
        }
       
    }

    //Devolve o elemento que está no topo da lista
    peek() {
        if(this.isEmpty()){
            return "Não há elementos para mostrar";
        }else{
            return this.items[this.items.length - 1];
        }        
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        return "Tamanaho: " + this.items.length;
    }

    showAllElements() {
        if(this.isEmpty()) {
            console.log("Não há elemento algum na pilha")
        }else{
            for(let c=this.items.length - 1; c>=0; c--){ 
                console.log(this.items[c])
            }
        }
    }

}

const stack = new Stack();

console.log(stack.isEmpty())
console.log(stack.peek())
console.log(stack.pop())
stack.push(12); stack.push(34); stack.push(33)
console.log(stack)
console.log(stack.showAllElements())


//EXEMPLO DE PILHA USANDO OBJETO









