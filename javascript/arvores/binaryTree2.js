class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class BinaryTree {
    constructor() {
        this.root = null;
    }

    insert(data) {
        const newNode = new Node(data);
        if(this.root === null) {
            this.root = newNode; //Se a árvore estiver vazia
        }else{
            this.insertNode(this.root, newNode)//Insere a partir da raiz
        }
    }

    insertNode(node, newNode) {
        if(newNode.data < node.data) {
            if(node.left === null) {
                node.left = newNode;
            }else{
                this.insertNode(node.left, newNode);
            }
        }else{
            if(node.right === null) {
                node.right = newNode;
            }else{
                this.insertNode(node.right, newNode);
            }
        }
    }

    search(node, data) {
        if (node === null) {
            return null; // Valor não encontrado
        }

        if (data < node.data) {
            return this.search(node.left, data); // Busca à esquerda
        } else if (data > node.data) {
            return this.search(node.right, data); // Busca à direita
        } else {
            return node; // Valor encontrado
        }   
    }

    inorder(node) {
        if (node !== null) {
            this.inorder(node.left);
            console.log(node.data);
            this.inorder(node.right);
        }
    }

    preorder(node) {
        if (node !== null) {
            console.log(node.data);
            this.preorder(node.left);
            this.preorder(node.right);
        }
    }

    postorder(node) {
        if (node !== null) {
            this.postorder(node.left);
            this.postorder(node.right); // Corrigido para chamar postorder
            console.log(node.data);
        }
    }
}

const tree = new BinaryTree();

tree.insert(1);
tree.insert(2);
tree.insert(34);
tree.insert(5);
//tree.insertNode(2, 4);

console.log("In order");
tree.inorder(tree.root)
console.log("Pre order");
tree.preorder(tree.root)
console.log("Post order");
tree.postorder(tree.root)