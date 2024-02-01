class Stack {
    constructor(limit){
        this.limit = limit;
        this.items = [];
    }

    push(data){
        if(this.isFull()){
            console.log("You can't add element on the stack, because the stack is full");
        }else{
            this.items.push(data);
        }
    }

    pop(){
        if(this.isEmpty()){
            console.log("You can't delete an element, because the satck is full");
        }else{
            const elementDeleted = this.items.pop();
            console.log(elementDeleted + " was deleted");
        }
    }

    showElement(data){
        if(this.isEmpty()){
            console.log("This element " + data + " is't on the stack, because it's emepty");
        }else{
            let found = false;
            for(let c=0; c<this.items.length; c++){
                if(data === this.items[c]){
                    console.log("The element " + data + " is on the stack at the position " + c);
                    found = true;
                    break;
                }
            }
            if(!found){
                console.log(data + " doesn't exists");
            }
        }
    }

    peek(){
        if(this.isEmpty()){
            console.log("The stack is empty");
        }else{
            const lastData = this.itmes[this.items.length - 1];
            console.log("The last element is " + lastData);
        }
    }


    isEmpty(){
       return this.items.length === 0;
    }

    isFull(){
        return this.items.length === this.limit;
    }

    top(){
        if(this.isEmpty()){
            console.log("There's no element to show");
        }else{
            const lastElement = this.items[this.items.length - 1];
            console.log("The last element on the stack is " + lastElement);
        }
    }
    
    size(){
        console.log("The size of the stack is " + this.items.length);
    }

    showStack(){
        console.log(" ========= ")
        for(let c=0; c<this.items.length; c++){
            console.log(this.items[c] + " at the position " + c);
        }
        console.log(" ========= ")
    }
}

const stack = new Stack(6);

stack.push(2);
stack.push(5)
stack.push(10)
stack.push(900)
stack.push(77)
stack.push(11);
/*stack.pop();
stack.pop();*/
stack.size()
stack.showStack();
stack.top();



