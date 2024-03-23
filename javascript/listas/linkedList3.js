class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor(){
        this.head = null;
        this.size = 0;
    }

    push(data) {
        const newNode = new Node(data);
        if(!this.head) {
            this.head = newNode;
        } else {
            let current = this.head;
            while(current.next) {
                current = current.next;
            }
            current.next = newNode;
        }
        this.size++;
    }

    getElement(position) {
        if(position < 0 || position >= this.size) {
            console.log("Undefined position");
        }else{
            let current = this.head;
            for(let c=0; c<position; c++){
                current = current.next;
            }
            console.log(current.data);
        }
    }

    getSize() {
        return this.size; 
    }
}

const l1 = new LinkedList();
l1.push(5);
l1.push(22);
l1.push(45);
l1.getElement(0)
console.log("Size: " + l1.getSize());
