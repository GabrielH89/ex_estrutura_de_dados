class Stack {
    constructor(limit){
        this.limit = limit;
        this.elements = [];
    }

    push(data){
        if(this.isFull()){
            console.log("You cannot add more elements to the array")
        }else{
            this.elements.push(data);
        }
    }

    pop(){
        if(this.isEmpty()){
            console.log("There's no elemento to delete");
        }else{
            const dataDeleted = this.elements.pop();
            console.log("Element " + dataDeleted + " was deleted");
        }
    }

    peek(){
        if(this.isEmpty()){
            console.log("The stack is empty");
        }else{
            const lastData = this.elements[this.elements.length - 1];
            console.log("The last element is " + lastData);
        }
    }

    isEmpty(){
        return this.elements.length === 0;
    }

    isFull(){
        return this.elements.length === this.limit;
    }

    size(){
        console.log("There are " + this.elements.length + " elements on the stack");
    }

    showStack() {
        if (this.isEmpty()) {
          console.log("The stack is empty");
        } else {  
          console.log("Stack elements: [ " + this.elements.join(" , ") + " ]");
        }
    }    
}

const s1 = new Stack(5);
s1.push(2);
s1.push(33)
s1.push(4)
s1.push(14);
s1.push(9)
s1.push(5)
s1.peek();
s1.size();
s1.showStack()

