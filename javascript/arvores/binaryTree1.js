class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BinaryTreee {
    constructor() {
        this.root = null;
    }

    insert(value){
        const newNode = new Node(value);
        if(this.root === null){
            this.root = newNode;
        }else{
            this.insertNode(this.root, newNode);//insert node: método auxiliar
        }
    }

    insertNode(node, newNode){
        if(newNode.value < node.value){
            if(node.left === null){
                node.left = newNode
            }else{
                this.insertNode(node.left, newNode)
            }
        }else{
            if(newNode.right === null){
                node.right = newNode;
            }else{  
                this.insertNode(node.right, newNode);
            }
        }
    }

    inorderTraverse(node = this.root) {
        if(node !== null){
            this.inorderTraverse(node.left);
            console.log(node.value);
            this.inorderTraverse(node.right);
        }
    }   
}

const tree = new BinaryTreee();
tree.insert('4');
tree.insert('f');
tree.insert('v');

console.log("Árvore binária em ordem (inorder traversal):");
tree.inorderTraverse();


