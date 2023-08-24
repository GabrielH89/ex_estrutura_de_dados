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

    append(data) {
        const newNode = new Node(data);

        if (!this.head) {
            this.head = newNode;
        } else {
            let current = this.head;
            while (current.next) {
                current = current.next;
            }
            current.next = newNode;
        }
    }

    insertAt(index, data) {
        if (index === 0) {
            const newNode = new Node(data);
            newNode.next = this.head;
            this.head = newNode;
            return;
        }

        let current = this.head;
        for (let i = 0; i < index - 1; i++) {
            if (!current) {
                console.log("Index out of bounds");
                return;
            }
            current = current.next;
        }

        if (current) {
            const newNode = new Node(data);
            newNode.next = current.next;
            current.next = newNode;
        } else {
            console.log("Index out of bounds");
        }
    }

    removeAt(index) {
        if (index === 0 && this.head) {
            this.head = this.head.next;
            return;
        }

        let current = this.head;
        for (let i = 0; i < index - 1; i++) {
            if (!current) {
                console.log("Index out of bounds");
                return;
            }
            current = current.next;
        }

        if (current && current.next) {
            current.next = current.next.next;
        } else {
            console.log("Index out of bounds");
        }
    }

    search(data) {
        let current = this.head;
        while (current) {
            if (current.data === data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }

    update(oldData, newData) {
        let current = this.head;
        while (current) {
            if (current.data === oldData) {
                current.data = newData;
                return true;
            }
            current = current.next;
        }
        return false;
    }

    display() {
        let current = this.head;
        while (current) {
            console.log(current.data);
            current = current.next;
        }
    }
}

const linkedList = new LinkedList();
linkedList.append(9);
linkedList.append(4);
linkedList.append(7);

console.log("Original List:");
linkedList.display();

console.log("Inserting 5 at index 1:");
linkedList.insertAt(1, 5);
linkedList.display();

console.log("Removing element at index 2:");
linkedList.removeAt(2);
linkedList.display();

console.log("Searching for element 4:", linkedList.search(4));
console.log("Searching for element 10:", linkedList.search(10));
console.log(linkedList.search(5));

console.log("Updating element 9 to 11:");
linkedList.update(9, 11);
linkedList.display();
