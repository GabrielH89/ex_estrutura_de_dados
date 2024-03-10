class Node {
    constructor(element){
        this.element = element;
        this.next = null
    }
}

class LinkedList {
    constructor() {
        this.head = null;
        this.size = 0;
    }

    push(element){
        const newNode = new Node(element);

        if(!this.head){
            this.head = newNode;
        }else{
            let current = this.head;
            while(current.next){
                current = current.next;
            }
            current.next = newNode
        }
        this.size ++;
    }

    sizeArray() {
        console.log("Size: " + this.size);
    }

    display() {
        let current = this.head;
        while(current){
            console.log(current.element);
            current = current.next;
        }
    }
}

const l1 = new LinkedList();
l1.push(4)
l1.push(5)
l1.push(4)
l1.push(3)
l1.sizeArray()
l1.display()



