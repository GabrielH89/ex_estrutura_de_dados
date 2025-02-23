class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
    }

    push(data) {
        const newNode = new Node(data);
        if(!this.head) {
            this.head = newNode;
        }
    }
}