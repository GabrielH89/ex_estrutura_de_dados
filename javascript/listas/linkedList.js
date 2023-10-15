class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    constructor(){
        this.head = null;
    }

    append(data){
        const newNode = new Node(data);
        if(!this.head){
            //Caso a lista esteja vazia, então deve-se adicionar o primeiro elemento
            this.head = newNode;
        }else{
            //Se já existe, então pegamos o atual elemento que está na cabeça da lista
            let current = this.head;
            while(current.next){
                current = current.next;
            }
            current.next = newNode;
        }
    }

    append(data){
        const newNode = new Node(data);
        if(!this.head){
            this.head = newNode;
        }else{
            let current = this.head;
            while(current.next){
                //Dentro do loop, atualizamos a variável current para que ela aponte para o próximo nó na lista. Continuamos fazendo isso até que current.next seja null, o que significa que current é o último nó.
                current = current.next;
            }
            //Após sair do loop, chega-se no último nó da lista
            current.next = newNode;
        }
    }

    delete(data){
        if(!this.head){
            return null;
        }
        if(this.head.data === data){
            this.head = this.head.next;
        }
    }
}

