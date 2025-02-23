class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BinaryTree {
    constructor() {
        this.root = null;
    }

    insert(value) {
        const newNode = new Node(value);
        if(this.root === null) {
            this.root = newNode;
        }else{
            this.insertNode(this.root, newNode);
        }
    }

    insertNode(node, newNode) {
        if(newNode.value < node.value) {
            if(node.left === null) {
                node.left = newNode;
            }else{
                this.insertNode(node.left, newNode)
            }
        }else{
            if(node.right === null){
                node.right = newNode;
            }else{
                this.insertNode(node.right, newNode);
            }
        }
    }

    inorderTraverse(node = this.root) {
        if(node != null){
            this.inorderTraverse(node.left);
            console.log(node.value);
            this.inorderTraverse(node.right);
        }        
    }

    preorderTraverse(node = this.root) {
        if(node != null){
            console.log(node.value);
            this.preorderTraverse(node.left);
            this.preorderTraverse(node.right);
        }
    }

    postorderTraverse(node = this.root) {
        if(node != null) {
            this.postorderTraverse(node.left);
            this.postorderTraverse(node.right);
            console.log(node.value);
        }
    }
}

const b1 = new BinaryTree();
b1.insert(4);
b1.insert(1);
b1.insert(3);
b1.insert(2);
b1.insert(6);
b1.insert(5);
b1.insert(7);
b1.preorderTraverse();
console.log("=======");
b1.postorderTraverse();
