class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null;
    }

    insert(value) {
        const newNode = new Node(value);
        if (this.root === null) {
            this.root = newNode;
        } else {
            //Se a árvore não está vazia, encontra um local p/ add o novo nó
            this.insertNode(this.root, newNode);
        }
    }

    //método auxiliar
    //node=valor que já está na raiz, newNode=valor que queremos inserir
    insertNode(node, newNode) {
        //Se o valor que queremos inserir é menor que o da raiz, então vai para a esquerda
        if (newNode.value < node.value) {
            //Se, à esquerda desse nó, não houver nenhum nó 
            if (node.left === null) {
                node.left = newNode;//Esse nó recebe à esquerda o novo nó que estamos inserindo
            } else {
                //Senão, então fazemos uma chamada recursiva p/ comparar com o novo nó com o filho à esquerda do nó atual
                this.insertNode(node.left, newNode);
            }
        } else {
            //Se o valor que queremos inserir é maior que a raiz, então vai para a direira
            //Se, à direita desse nó, não houver nenhum nó
            if (node.right === null) {
                node.right = newNode;//Esse nó à direita recebe o novo nó
            } else {
                //Senão, então fazemos uma chamada recursiva p/ comparar com o novo nó com o filho à direita do nó atual
                this.insertNode(node.right, newNode);
            }
        }
    }

    inorderTraverse(node = this.root) {
        if (node != null) {
            this.inorderTraverse(node.left);
            console.log(node.value);
            this.inorderTraverse(node.right);
        }
    }

    preorderTraverse(node = this.root) {
        if (node != null) {
            console.log(node.value);
            this.preorderTraverse(node.left);
            this.preorderTraverse(node.right);
        }
    }

    postorderTraverse(node = this.root) {
        if (node != null) {
            this.postorderTraverse(node.left);
            this.postorderTraverse(node.right);
            console.log(node.value);
        }
    }

    minValue(node = this.root) {
        let current = node;
        while(current.left !== null){
            current = current.left;
        }         
        console.log("Min value: " + current.value);
    }

    maxValue(node = this.root) {
        let current = node;
        while(current.right !== null){
            current = current.right;
        }
        console.log("Máx vlaue: " + current.value);
    }

    //Key=valor que estmaos procurando / node=nó que estamos procurando examinando na busca
    //node = this.root significa que o nó começa na raiz
    searchValue(key, node = this.root) {
       //Se o nó da raiz for nulo ou o valor desse nó for igual à chave que estamos passando  
        if(node === null || node.value === key) {
            return node;//retorna o nó
        }

        //Se a chave que estamos passando for menor que o valor do nó atual
        if(key < node.value) {
            //Busca o valor na subárvore esquerda, porque os menores estão lá
            return this.searchValue(key, node.left);
        }else{
            //Busca o valor na subárvore direita
            return this.searchValue(key, node.right);
        }
    }

    remove(value) {
        this.root = this.removeNode(this.root, value);
    }

    removeNode(node, value) {
        if (node === null) {
            return null; // Retorna null se a árvore está vazia
        }

        if (value < node.value) {
            // Se o valor é menor que o valor do nó atual, busca na subárvore esquerda
            node.left = this.removeNode(node.left, value);
            return node;
        } else if (value > node.value) {
            // Se o valor é maior que o valor do nó atual, busca na subárvore direita
            node.right = this.removeNode(node.right, value);
            return node;
        } else {
            // Se encontrou o nó com o valor desejado

            // Caso 1: Nó é um nó folha (sem filhos)
            if (node.left === null && node.right === null) {
                return null; // Remove o nó simplesmente retornando null ao nó pai
            }

            // Caso 2: Nó tem apenas um filho
            if (node.left === null) {
                return node.right; // Retorna o filho direito para substituir o nó a ser removido
            }

            if (node.right === null) {
                return node.left; // Retorna o filho esquerdo para substituir o nó a ser removido
            }

            // Caso 3: Nó tem dois filhos
            // Encontrar o nó mínimo na subárvore direita (ou máximo na subárvore esquerda)
            let minRightNode = this.findMinNode(node.right);
            node.value = minRightNode.value; // Substitui o valor do nó pelo valor do nó mínimo
            node.right = this.removeNode(node.right, minRightNode.value); // Remove o nó mínimo
            return node;
        }
    }

    findMinNode(node) {
        // Encontra o nó com o menor valor na árvore (subárvore esquerda)
        while (node.left !== null) {
            node = node.left;
        }
        return node;
    }
}


const bst = new BinarySearchTree();
bst.insert(4);//Nó raiz
bst.insert(1);
bst.insert(3);
bst.insert(2);
bst.insert(6);
bst.insert(5);
bst.insert(7);
bst.preorderTraverse();
console.log("=======");
bst.postorderTraverse();
bst.minValue()
bst.maxValue()
const key = bst.searchValue(55);

const foundNode = bst.searchValue(1);
if (foundNode) {
    console.log("Valor encontrado:", foundNode.value);
} else {
    console.log("Valor não encontrado na árvore.");
}


