class Stack {
    constructor() {
        this.items = []; 
    }

    push(element) {
        this.items.push(element);
    }

    pop() {
        if(this.isEmpty()) {
            console.log("The stack is empty");
        }else{
            this.items.pop();
        }
    }

    peek() {
        let lastElement = this.items[this.items.length - 1];
        console.log("Elemento on top of the stack " + lastElement);
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        console.log("Size of stack " + this.items.length); 
    }

    showStack() {
        for(let c=this.items.length - 1; c>=0; c--) {
            console.log(this.items[c]);
        }
    }
}


const s1 = new Stack();
s1.push(3)
s1.push(6)
s1.push(2)
s1.pop()
s1.size()
s1.peek()
s1.showStack()
s1.isEmpty()