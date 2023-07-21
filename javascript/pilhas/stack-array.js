class Stack {
    constructor() {
        this.items = [];
    }

    addElement(element) {
        if(element < 0){
            return "You cannot add a number less than zero";
        }else{
            return this.items.push(element)
        }
        
        
    }

    deleteElement() {
        if (this.isEmpty()) {
            return "There's no more elements to delete on array";
        }else{
            const elementDel = this.items.pop();
            return elementDel + " deleted";
        }
        
    }

    peek() {
        if(this.isEmpty()) {
            return "There's no element to show";
        }else{
            return this.items[this.items.length - 1];
        }
    }

    isEmpty() {
        return this.items.length === 0;
    }

    showStack() {
        return this.items;
    }

    showStackByElements() {
        for(let c=0; c<this.items.length; c++) {
             console.log(this.items[c])
        }
    }

    quantElements() {
        if(this.isEmpty()) {
            return "There's no element on the array"
        }else if (this.items.length === 1) {
            return "There's " + this.items.length + " element on the array"
        }else{
            return "There are " + this.items.length + " elements on the array"
        }
    }

}

const stack = new Stack();
stack.addElement(6); stack.addElement(0); stack.addElement(4);
console.log(stack.addElement(-33))

console.log(stack.isEmpty())
console.log(stack.showStack())
console.log(stack.peek())
console.log(stack.quantElements())
console.log(stack.showStackByElements());
