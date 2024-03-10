//É UMA ESTRUTURA DINÂMICA: pode aumentar e diminuir o vetor
//ESTRUTURAS DIINÂMICAS: pilhas, filas, lista, listas encadeadas, árvores  
//ESTRUTURA ESTÁTICA: crio o vetor com 3 pisções, então só posso add 3 elementos, pois não consigo 
//aumentar ou diminui o tamanho do vetor

/*class Stack {
    constructor(){
        this.items = [];
    }

    push(element) {
        this.items.push(element);
    }

    pop(){
        if(this.isEmpty()){
            console.log("The stack is empty");
        }else{
            this.items.pop();
        }
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        console.log("Size of stack " + this.items.length);
    }

    peek() {
        if(this.isEmpty()){
            console.log("The stack is empty");
        }else{
            const lastElement = this.items[this.items.length - 1];
            console.log("Last element: " + lastElement);
        }
    }

    showStack() {
        console.log("==== THE COMPLETE STACK ====")
        for(let c=0; c<this.items.length; c++){
            console.log(this.items[c]);
        }
    }
}

const s1 = new Stack()
s1.push(4);
s1.push(6)
s1.push(13)
s1.pop();
s1.size()
s1.peek()
s1.showStack()*/

class Stack {
    constructor() {
        this.items = [];
    }

    push(element){
        if(element === undefined){
            console.log("Undefined value")
        }else{
            this.items.push(element);
        }
        
    }

    pop(){
        if(this.isEmpty()){
            console.log("Isn't possible to delete, because the stack is empty");
        }else{
            this.items.pop();
        }
    }

    peek() {
        if(this.isEmpty()){
            console.log("Impossible to show the top value, because the Stack is empty")
        }else{
            const topElement = this.items[this.items.length - 1];
            console.log("Top element: " + topElement);
        }    
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        const sizeArray = this.items.length;
        console.log("Size of array: " + sizeArray)
    }

    showArray() {
        for(let c=0; c<this.items.length; c++){
            console.log(this.items[c]);
        }
    }
}

const s1 = new Stack();
s1.push(2)
s1.push(4)
s1.push(55)
s1.peek()
s1.size()
s1.showArray()
