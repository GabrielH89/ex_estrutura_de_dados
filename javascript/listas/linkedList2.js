class Node {
    constructor(element) {
        this.element = element;
        this.next = null;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
        this.size = 0;
    }

    push(element) {
        const newNode = new Node(element);

        if (!this.head) {
            this.head = newNode;
        } else {
            let current = this.head;
            while (current.next) {
                current = current.next;
            }
            current.next = newNode;
        }

        // Incrementa o tamanho da lista após adicionar um elemento
        this.size++;
    }

    remove(element) {
        if (!this.head) {
            return;
        }

        if (this.head.element === element) {
            this.head = this.head.next;
            // Decrementa o tamanho da lista após remover um elemento
            this.size--;
            return;
        }

        let current = this.head;
        let previous = null;

        while (current && current.element !== element) {
            previous = current;
            current = current.next;
        }

        if (current) {
            previous.next = current.next;
            // Decrementa o tamanho da lista após remover um elemento
            this.size--;
        }
    }

    // O método size() agora retorna o tamanho atual da lista
    size() {
        return this.size;
    }
}

const l1 = new LinkedList();
l1.push(4);
console.log(l1.size()); // Saída: 1
