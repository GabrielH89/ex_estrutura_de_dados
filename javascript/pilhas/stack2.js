class Stack {
    constructor() {
        this.item = [];
    }

    push(data) {
        this.item.push(data);
    }

    pop() {
        if(this.isEmpty()) {
            console.log("Cannot delete a data cause stack is empty");
        }else{
            this.item.pop();
        }
    }

    size() {
        const sizeStack = this.item.length;
        console.log("Size of satck: " + sizeStack)
    }

    peek() {
        if(this.isEmpty()) {
            console.log("Cannot show last element cause stack is empty");
        }else{
            const lastElement =  this.item[this.item.length - 1];
            console.log("Last element: " + lastElement);
        }
    }

    isEmpty() {
        return this.item.length === 0;
    }

    printStack() {
        for(let c=0; c<this.item.length; c++) {
            console.log(this.item[c]);
        }
    }
}

const s1 = new Stack();

s1.push(5);
s1.push(12);
s1.push(2);
s1.isEmpty()
//s1.pop()
s1.size()
s1.peek()
s1.printStack()
