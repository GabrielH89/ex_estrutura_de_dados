class Node {
    constructor(data){
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
        this.size = 0;
    }

    push(data) {
        const newNode = new Node(data);
        if(!this.head){
            this.head = newNode;
        }else{
            let current = this.head;
            while(current.next){
                current = current.next;
            }
            current.next = newNode;
        }
        this.size ++;
    }

    //Função que mostra um elemento passando a sua posição
    getElement(position) {
        if(position < 0 || position >= this.size){
            console.log("Undefined position");
        }else{
            let current = this.head;
            for(let c=0; c<position; c++){
                current = current.next;
            }
            console.log(current.data);
        }
    }

    getElementAt(position) {
        if (position < 0 || position >= this.size) {
            console.log("Invalid position");
            return null;
        }
    
        let current = this.head;
        let index = 0;
        while (index < position) {
            current = current.next;
            index++;
        }
    
        return current.data;
    }
    
    //Função que remove um elemento específico da lista
    remove(data) {
        let current = this.head;
        let previous = null;
    
        // Verifica se o elemento a ser removido é a cabeça da lista.
        if (current.data === data) {
            this.head = current.next; // Atualiza a cabeça para o próximo nó.
            this.size--; // Reduz o tamanho da lista.
            return; // Retorna após a remoção bem-sucedida.
        }
    
        // Percorre a lista até encontrar o elemento ou chegar ao final.
        while (current !== null && current.data !== data) {
            previous = current; // Armazena o nó anterior.
            current = current.next; // Avança para o próximo nó.
        }
    
        // Verifica se o elemento foi encontrado na lista.
        if (current === null) {
            console.log("Element not found"); // Elemento não encontrado.
            return;
        }
    
        // Atualiza as referências para remover o elemento.
        previous.next = current.next; // "Pula" o nó atual na lista.
        this.size--; // Reduz o tamanho da lista.
    }
       
    //Função que remove um elemento passando a sua posição
    removeAt(position){
        if(position < 0 || position >= this.size){
            console.log("Invalid position");
        }

        let current = this.head;
        if(position === 0){
            //Se a posição passada for igual a 0, então atualiza o head p/ o próximo Nó
            this.head = current.next;
        }else{
            //Caso contrário, itera pela lista até encontrar o nó da posição desejada
            let previous = null;//Variável usada p/ armaenar o nó anterior ao nó que queremos remover
            for(let c=0; c<position; c++){
                //Atualiza a referência do nó anterior para apontar para o próximo nó
                //Ignorando assim o nó a ser removido
                previous = current;
                current = current.next;
            }
            previous.next = current.next;
        }
       this.size --;
    }

    insertAt(position, data) {
        if(position < 0 || position > this.size){
            console.log("Invalid position");
            return;
        }
    
        const newNode = new Node(data);
    
        if(position === 0){
            newNode.next = this.head;
            this.head = newNode;
        }else{
            let current = this.head;
            let previous = null;
            let index = 0;
    
            while(index < position){
                previous = current;
                current = current.next;
                index++;
            }
    
            newNode.next = current;
            previous.next = newNode;
        }
    
        this.size++;
    }
    
    display() {
        let current = this.head;
        const list = [];
        while(current){
            list.push(current.data);
            current = current.next;
        }
        console.log("[", list.join(", "), "]");
    }

    size() {
        return this.size;
    }
}

const l1 = new LinkedList();

l1.push(3);
l1.push(4);
l1.push(2);
l1.push(9);
l1.removeAt(2);
l1.insertAt(2, 45);
l1.insertAt(3, 21)
l1.remove(21);
l1.display();
console.log("Size of list: " + l1.size);

