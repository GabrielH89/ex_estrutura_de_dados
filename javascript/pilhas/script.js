class Stack {
    constructor(limit) {
        this.limit = limit;
        this.items = [];
    }

    add(value) {
        if(this.isFull()) {
            console.log("You cannot add more elements on the stack, because it's full")
        }else{
            this.items.push(value);
            console.log(value + " added with success");
        }
    }

    pop() {
        if(this.isEmpty()){
            console.log("You cannot delete elements on the ta the stack because it's empty")
        }else{
            const elementDeleted = this.items.pop();
            console.log(elementDeleted + " deleted with success");
        }
    }

    isEmpty() {
        return this.items.length === 0;
    } 

    isFull() {
        return this.items.length === this.limit;
    }

    showStack() {
        console.log(this.items);
    }
    
    showElement(element) {
        if(this.isEmpty()){
            console.log("There's no element on the stack to show")
        }else{
            let found = false;
            for(let c=0; c<=this.items.length; c++) {
                if(element === this.items[c]){
                    console.log(element + " exists at the position " + c);
                    found = true;
                    break;
                }
            }
            if(!found){
                console.log(element + " does not exists");
            }
        }
    }
}
const stackLimit = 4;
const stack1 = new Stack(stackLimit);
stack1.add(1)
stack1.add(5)
stack1.add(78)
stack1.add(0)
stack1.add(4)
stack1.pop();
stack1.pop();
stack1.pop();
stack1.pop();
stack1.pop();
stack1.showStack();
stack1.showElement(0);
