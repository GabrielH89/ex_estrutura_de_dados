/*class Node {
    constructor(data, next = null){
        this.data = data;
        this.next = next;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
    }

    insert(data) {
        this.head = new Node(data, this.head);
    }


    displayList() {
        let current = this.head;
        let elements = []
        while(current){
            elements.push(current.data);
            current = current.next
        }
        console.log('[' + elements.join(', ') + ']')
    }
}

const linkedList = new LinkedList()

linkedList.insert(4);
linkedList.insert(45);
linkedList.displayList()*/






class Node {
    constructor(data){
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor (){
        //Topo da lista 
        this.head = null;
        this.size = 0;
    }

    //Insere elemento ao final da lista
    push(data) {
        const newNode = new Node(data);
        if(!this.head) {
            // Se a lista está vazia, o novo nó se torna o primeiro nó (head)
            this.head = newNode;
        }else{
            //Se já existe algum elemento na lista, deve-se caminhar ao longo da sequência de nós
            //até chegar no último elemento.
            //último elemento: elemento em que o campo next é vazio
            //pointer = ponteiro que aponta para o próximo elemento da lista
            //pointer começa com o mesmo valor da cabeça
            let pointer = this.head;
            while(pointer.next){
                //Enquanto houver um next, significa que ainda há elementos na lista
                pointer = pointer.next;
            }
            // Adiciona o novo nó como próximo do último nó na lista
            pointer.next = newNode
        }
        this.size = this.size + 1;
    }

    //FUNÇÃO QUE REMOVE O ELEMENTO PASSADO NA FUNÇÃO
    remove(data) {
        if (!this.head) {
            return; // Lista vazia, nada a fazer
        }

        if (this.head.data === data) {
            this.head = this.head.next;
            this.size--;
            return;
        }

        let current = this.head;
        let previous = null;

        while (current && current.data !== data) {
            previous = current;
            current = current.next;
        }

        if (current) {
            previous.next = current.next;
            this.size--;
        }
    }

    searchValue(value) {
        let pointer = this.head;
        let position = 0;
        let found = false;
        while(pointer){
            if(pointer.data === value){
                found = true;
                console.log("Value " + value + " found at position " + position);
            }
            pointer = pointer.next;
            position ++;
        }
        if(!found){
            console.log("Element " + value + " not found");
        }
    }

    display() {
        let pointer = this.head;
        while(pointer){
            console.log(pointer.data);
            pointer = pointer.next;
        }
    }

}

const l1 = new LinkedList();
l1.push(3)
l1.push(7)
l1.push(4)
l1.push(22)
l1.remove(4)
l1.display();
l1.searchValue(33)
console.log("SIZE: " + l1.size)








